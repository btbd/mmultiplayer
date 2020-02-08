#include "../stdafx.h"

static auto recording = false, playing = false, cameraView = false;

static int duration = 0, frame = 0;
static std::vector<Dolly::Marker> markers;

static auto character = Engine::Character::Faith;
static Dolly::Recording currentRecording;
static std::vector<Dolly::Recording> recordings;

static Classes::FRotator VectorToRotator(Classes::FVector vector) {
	auto convert = [](float r) {
		return static_cast<unsigned int>((fmodf(r, 360.0f) / 360.0f) * 0x10000);
	};

	return Classes::FRotator{ convert(vector.X), convert(vector.Y), convert(vector.Z) };
}

static Classes::FVector RotatorToVector(Classes::FRotator rotator) {
	auto convert = [](unsigned int r) {
		return (static_cast<float>(r % 0x10000) / static_cast<float>(0x10000)) * 360.0f;
	};

	return Classes::FVector{ convert(rotator.Pitch), convert(rotator.Yaw), convert(rotator.Roll) };
}

static float Interpolate(float x0, float x1, float y0, float y1, float m0, float m1, float x) {
	auto t = (x - x0) / (x1 - x0);
	auto t2 = t * t;
	auto t3 = t2 * t;

	auto h00 = (2 * t3) - (3 * t2) + 1;
	auto h10 = t3 - (2 * t2) + t;
	auto h01 = (-2 * t3) + (3 * t2);
	auto h11 = t3 - t2;

	auto domain = x1 - x0;

	return (h00 * y0) + (h10 * domain * m0) + (h01 * y1) + (h11 * domain * m1);
}

static inline float GetMarkerField(int index, int fieldOffset) {
	return *reinterpret_cast<float *>(reinterpret_cast<byte *>(&markers[index]) + fieldOffset);
}

// Must have more than 1 marker
static float Slope(int index, int fieldOffset) {
	if (index == 0) {
		return (GetMarkerField(index + 1, fieldOffset) - GetMarkerField(index, fieldOffset)) / static_cast<float>(markers[index + 1].Frame - markers[index].Frame);
	} else if (index == markers.size() - 1) {
		return (GetMarkerField(index, fieldOffset) - GetMarkerField(index - 1, fieldOffset)) / static_cast<float>(markers[index].Frame - markers[index - 1].Frame);
	}

	return 0.5f *
		(((GetMarkerField(index + 1, fieldOffset) - GetMarkerField(index, fieldOffset)) / static_cast<float>(markers[index + 1].Frame - markers[index].Frame)) + 
		(GetMarkerField(index, fieldOffset) - GetMarkerField(index - 1, fieldOffset)) / static_cast<float>(markers[index].Frame - markers[index - 1].Frame));
}

static void FixTimeline() {
	duration = 0;

	for (auto &m : markers) {
		// Normalize the rotations
		m.Rotation = RotatorToVector(VectorToRotator(m.Rotation));

		duration = max(m.Frame, duration);
	}

	for (auto &r : recordings) {
		duration = max(r.StartFrame + static_cast<int>(r.Frames.size()) - 1, duration);
	}

	std::sort(markers.begin(), markers.end(), [](const Dolly::Marker &a, const Dolly::Marker &b) {
		return a.Frame < b.Frame;
	});

	if (markers.size() > 0) {
		auto &first = markers[0].Rotation;
		first.X += 360.0f;
		first.Y += 360.0f;
		first.Z += 360.0f;

		for (auto i = 1UL; i < markers.size(); ++i) {
			auto &prev = markers[i - 1].Rotation;
			auto &curr = markers[i].Rotation;

			// Make each turn take the shortest distance
			auto shorten = [](float prev, float &curr) {
				while (curr < prev) {
					curr += 360.0f;
				}

				if (fabsf((curr - 360.0f) - prev) < fabsf(curr - prev)) {
					curr -= 360.0f;
				}
			};

			shorten(prev.X, curr.X);
			shorten(prev.Y, curr.Y);
			shorten(prev.Z, curr.Z);
		}
	}
}

static void ShiftTimeline(int amount) {
	frame += amount;

	for (auto &m : markers) {
		m.Frame += amount;
	}

	for (auto &r : recordings) {
		r.StartFrame += amount;
	}
}

static void FixPlayer() {
	auto pawn = Engine::GetPlayerPawn();
	auto controller = Engine::GetPlayerController();
	if (!pawn || !controller) {
		return;
	}

	auto hide = playing || cameraView;

	pawn->SetCollisionType(hide ? Classes::ECollisionType::COLLIDE_NoCollision : Classes::ECollisionType::COLLIDE_BlockAllButWeapons);
	pawn->SetHidden(hide);
	pawn->Mesh->SetHidden(hide);
	pawn->Mesh1p->SetHidden(hide);
	pawn->Mesh1pLowerBody->SetHidden(hide);
	pawn->Mesh3p->SetHidden(hide);
	pawn->bCollideWorld = !hide;
	controller->bCanBeDamaged = !hide;
	controller->PlayerCamera->SetFOV(controller->DefaultFOV);

	if (!hide) {
		for (auto &r : recordings) {
			if (r.Pawn) {
				r.Pawn->Location = { 0 };
			}
		}

		pawn->EnterFallingHeight = -1e30f;
	}
}

static void DollyTab() {
	auto pawn = Engine::GetPlayerPawn();
	auto controller = Engine::GetPlayerController();
	if (!pawn || !controller) {
		return;
	}

	if (playing) {
		if (ImGui::Button("Stop##dolly")) {
			playing = false;
			
			FixPlayer();
		}
	} else if (ImGui::Button("Play##dolly")) {
		if (frame >= duration) {
			frame = 0;
		}

		playing = true;
		FixPlayer();
	}

	ImGui::SameLine();
	if (ImGui::Checkbox("Camera View##dolly", &cameraView)) {
		FixPlayer();
	}

	ImGui::SameLine();
	ImGui::Text("|");
	ImGui::SameLine();
	if (recording) {
		if (ImGui::Button("Stop Recording##dolly")) {
			recording = false;
			recordings.push_back(currentRecording);
			currentRecording.Frames.clear();
			currentRecording.Frames.shrink_to_fit();

			FixTimeline();
		}
	} else if (ImGui::Button("Start Recording##dolly-record")) {
		currentRecording.StartFrame = frame;
		currentRecording.Character = character;
		Engine::SpawnCharacter(currentRecording.Character, currentRecording.Pawn);
		recording = true;
	}

	static auto selectedCharacter = Engine::Characters[0];
	ImGui::SameLine();
	ImGui::PushItemWidth(200);
	if (ImGui::BeginCombo("##dolly-character", selectedCharacter)) {
		for (auto i = 0; i < IM_ARRAYSIZE(Engine::Characters); ++i) {
			auto c = Engine::Characters[i];
			auto s = (c == selectedCharacter);
			if (ImGui::Selectable(c, s)) {
				selectedCharacter = c;
				character = static_cast<Engine::Character>(i);
			}

			if (s) {
				ImGui::SetItemDefaultFocus();
			}
		}

		ImGui::EndCombo();
	}
	ImGui::PopItemWidth();

	ImGui::InputInt("Frame##dolly", &frame);
	if (markers.size() == 0 && recordings.size() == 0) {
		frame = 0;
	}

	ImGui::SameLine();
	if (ImGui::Button("Add Marker##dolly")) {
		if (pawn && controller) {
			Dolly::Marker marker(frame, controller->PlayerCamera->GetFOVAngle(), pawn->Location, RotatorToVector(pawn->Controller->Rotation));

			auto replaced = false;
			for (auto &m : markers) {
				if (m.Frame == marker.Frame) {
					m = marker;
					replaced = true;
					break;
				}
			}

			if (!replaced) {
				markers.push_back(marker);
			}

			if (marker.Frame < 0) {
				ShiftTimeline(-marker.Frame);
			}
			
			FixTimeline();
		}
	}

	auto highlights = new int[markers.size()];
	for (auto i = 0UL; i < markers.size(); ++i) {
		highlights[i] = markers[i].Frame;
	}

	ImGui::SliderInt("Timeline##dolly", &frame, 0, duration, highlights, markers.size());
	delete[] highlights;

	float fov = controller->PlayerCamera->GetFOVAngle();
	if (ImGui::SliderFloat("FOV##dolly", &fov, 0, 160) && !cameraView) {
		controller->PlayerCamera->SetFOV(fov);
	}

	if (ImGui::CollapsingHeader("Markers##dolly")) {
		for (auto i = 0UL; i < markers.size(); ++i) {
			auto &marker = markers[i];

			ImGui::Text("Marker %d - %d", i, marker.Frame);

			char labelBuffer[0xFF];
			sprintf_s(labelBuffer, sizeof(labelBuffer), "##dolly-marker-%d", i);
			std::string label(labelBuffer);

			ImGui::SameLine();
			if (ImGui::Button(("Move" + label).c_str())) {
				marker.Frame = frame;

				if (marker.Frame < 0) {
					ShiftTimeline(-marker.Frame);
				}
				
				FixTimeline();
			}
			
			ImGui::SameLine();
			if (ImGui::Button(("Goto" + label).c_str())) {
				frame = marker.Frame;
				cameraView = true;
			}

			ImGui::SameLine();
			if (ImGui::Button(("Delete" + label).c_str())) {
				markers.erase(markers.begin() + i);
				--i;

				FixTimeline();
			}
		}
	}

	if (ImGui::CollapsingHeader("Recordings##dolly")) {
		for (auto i = 0UL; i < recordings.size(); ++i) {
			auto &rec = recordings[i];

			ImGui::Text("Recording %d - %s (%d - %d)", i, Engine::Characters[static_cast<size_t>(rec.Character)], rec.StartFrame, rec.StartFrame + rec.Frames.size() - 1);

			auto label = "##dolly-recording-" + std::to_string(i);

			ImGui::SameLine();
			if (ImGui::Button(("Move" + label).c_str())) {
				rec.StartFrame = frame;

				if (rec.StartFrame < 0) {
					ShiftTimeline(-rec.StartFrame);
				}

				FixTimeline();
			}

			ImGui::SameLine();
			if (ImGui::Button(("Delete" + label).c_str())) {
				if (rec.Pawn) {
					Engine::Despawn(rec.Pawn);
					rec.Pawn = nullptr;
				}

				recordings.erase(recordings.begin() + i);
				--i;

				FixTimeline();
			}
		}
	}
}

static void OnTick(float) {
	auto pawn = Engine::GetPlayerPawn();
	auto controller = Engine::GetPlayerController();

	if (pawn && controller) {
		if (playing || cameraView) {
			if (markers.size() == 1) {
				auto &m = markers[0];
				pawn->Location = m.Position;
				pawn->Controller->Rotation = VectorToRotator(m.Rotation);
			} else if (markers.size() > 1) {
				for (auto i = static_cast<int>(markers.size() - 1); i >= 0; --i) {
					auto &m0 = markers[i];
					if (m0.Frame <= frame) {
						if (i == markers.size() - 1) {
							controller->PlayerCamera->SetFOV(m0.FOV);
							pawn->Location = m0.Position;
							pawn->Controller->Rotation = VectorToRotator(m0.Rotation);
						} else {
							auto &m1 = markers[i + 1];

							Classes::FVector pos;
							Classes::FVector rot;

							for (auto p = 0; p < 3; ++p) {
								auto fieldOffset = FIELD_OFFSET(Dolly::Marker, Position.X) + (p * sizeof(float));
								auto s0 = Slope(i, fieldOffset);
								auto s1 = Slope(i + 1, fieldOffset);

								(&pos.X)[p] = Interpolate(static_cast<float>(m0.Frame), static_cast<float>(m1.Frame), GetMarkerField(i, fieldOffset), GetMarkerField(i + 1, fieldOffset), s0, s1, static_cast<float>(frame));
							}

							for (auto r = 0; r < 3; ++r) {
								auto fieldOffset = FIELD_OFFSET(Dolly::Marker, Rotation.X) + (r * sizeof(float));
								auto s0 = Slope(i, fieldOffset);
								auto s1 = Slope(i + 1, fieldOffset);

								(&rot.X)[r] = Interpolate(static_cast<float>(m0.Frame), static_cast<float>(m1.Frame), GetMarkerField(i, fieldOffset), GetMarkerField(i + 1, fieldOffset), s0, s1, static_cast<float>(frame));
							}

							controller->PlayerCamera->SetFOV(Interpolate(
								static_cast<float>(m0.Frame),
								static_cast<float>(m1.Frame),
								GetMarkerField(i, FIELD_OFFSET(Dolly::Marker, FOV)),
								GetMarkerField(i + 1, FIELD_OFFSET(Dolly::Marker, FOV)),
								Slope(i, FIELD_OFFSET(Dolly::Marker, FOV)),
								Slope(i + 1, FIELD_OFFSET(Dolly::Marker, FOV)),
								static_cast<float>(frame)));
							
							pawn->Location = pos;
							controller->Rotation = VectorToRotator(rot);
						}

						break;
					}
				}
			}

			pawn->Velocity = { 0 };
			pawn->Health = pawn->MaxHealth;

			for (auto i = 0UL; i < pawn->Timers.Num(); ++i) {
				pawn->Timers[i].Count = 0;
			}

			if (playing && ++frame > duration) {
				frame = 0;
				playing = false;
				
				FixPlayer();
			}
		}

		if (recording) {
			Dolly::Recording::Frame f;
			f.Position = pawn->Location;
			f.Rotation = pawn->Rotation;
			memcpy(f.Bones, pawn->Mesh3p->LocalAtoms.Buffer(), sizeof(f.Bones));

			currentRecording.Frames.push_back(f);
		}

		for (auto &r : recordings) {
			if (r.Pawn) {
				if (frame >= r.StartFrame && frame < r.StartFrame + static_cast<int>(r.Frames.size())) {
					auto &f = r.Frames[frame - r.StartFrame];
					r.Pawn->Location = f.Position;
					r.Pawn->Rotation = f.Rotation;
				} else {
					r.Pawn->Location = { 0 };
				}

				r.Pawn->Mesh3p->ForceUpdate(false);
			}
		}
	}
}

static void OnRender(IDirect3DDevice9 *device) {
	if (!playing) {
		auto window = ImGui::BeginRawScene("##dolly-backbuffer");

		if (markers.size() > 1) {
			for (auto i = 0UL; i < markers.size() - 1; ++i) {
				auto &m0 = markers[i];
				auto &m1 = markers[i + 1];
				
				float s0[3];
				float s1[3];
				for (auto p = 0; p < 3; ++p) {
					auto fieldOffset = FIELD_OFFSET(Dolly::Marker, Position.X) + (p * sizeof(float));
					s0[p] = Slope(i, fieldOffset);
					s1[p] = Slope(i + 1, fieldOffset);
				}

				for (float t = static_cast<float>(m0.Frame); t < m1.Frame; t += 5) {
					Classes::FVector pos;
					for (auto p = 0; p < 3; ++p) {
						auto fieldOffset = FIELD_OFFSET(Dolly::Marker, Position.X) + (p * sizeof(float));
						(&pos.X)[p] = Interpolate(static_cast<float>(m0.Frame), static_cast<float>(m1.Frame), GetMarkerField(i, fieldOffset), GetMarkerField(i + 1, fieldOffset), s0[p], s1[p], t);
					}

					if (Engine::WorldToScreen(device, pos)) {
						window->DrawList->AddCircleFilled(ImVec2(pos.X, pos.Y), 2000.0f / pos.Z, ImColor(ImVec4(1, 0, 0, 1)));
					}
				}
			}
		}

		for (auto &m : markers) {
			auto pos = m.Position;
			if (Engine::WorldToScreen(device, pos)) {
				auto markerSize = 7500.0f / pos.Z;

				ImVec2 topLeft(pos.X - markerSize, pos.Y - markerSize);
				ImVec2 bottomRight(pos.X + markerSize, pos.Y + markerSize);
				window->DrawList->AddRectFilled(topLeft, bottomRight, ImColor(ImVec4(0.18f, 0.31f, 0.31f, 1)));
			}
		}

		ImGui::EndRawScene();
	}
}

bool Dolly::Initialize() {
	Menu::AddTab("Dolly", DollyTab);
	Engine::OnTick(OnTick);
	Engine::OnRenderScene(OnRender);

	Engine::OnBonesTick([](Classes::TArray<Classes::FBoneAtom> *bones) {
		for (auto &r : recordings) {
			if (r.Pawn && &r.Pawn->Mesh3p->LocalAtoms == bones && frame >= r.StartFrame && frame < r.StartFrame + static_cast<int>(r.Frames.size())) {
				Engine::TransformBones(r.Character, bones, r.Frames[frame - r.StartFrame].Bones);
			}
		}
	});
	
	Engine::OnPreLevelLoad([](const wchar_t *levelName) {
		for (auto &r : recordings) {
			r.Pawn = nullptr;
		}
	});

	Engine::OnPostLevelLoad([](const wchar_t *levelName) {
		for (auto &r : recordings) {
			Engine::SpawnCharacter(r.Character, r.Pawn);
		}
	});

	Engine::OnPreDeath([]() {
		for (auto &r : recordings) {
			r.Pawn = nullptr;
		}
	});

	Engine::OnPostDeath([]() {
		for (auto &r : recordings) {
			Engine::SpawnCharacter(r.Character, r.Pawn);
		}
	});

	return true;
}

std::string Dolly::GetName() {
	return "Dolly";
}