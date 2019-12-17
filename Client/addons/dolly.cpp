#include "../stdafx.h"

void DollyTab() {

}

bool Dolly::Initialize() {
	Menu::AddTab("Dolly", DollyTab);

	return true;
}

string Dolly::GetName() {
	return "Dolly";
}