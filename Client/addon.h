#include "stdafx.h"

class Addon {
	public:
		virtual bool Initialize() = 0;
		virtual std::string GetName() = 0;
};