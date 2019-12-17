#include "../stdafx.h"

void DollyTab() {

}

bool Dolly::Initialize() {
	Menu::AddTab("Dolly", DollyTab);

	return true;
}

std::string Dolly::GetName() {
	return "Dolly";
}