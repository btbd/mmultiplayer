#pragma once

#include <string>

class Addon {
	public:
		virtual bool Initialize() = 0;
		virtual std::string GetName() = 0;
};