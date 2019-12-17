#include "stdafx.h"

class Addon {
	public:
		virtual bool Initialize() = 0;
		virtual string GetName() = 0;
};