#pragma once

#include "Library.h"

class VnTelNumberGenerator {
private:
	static int _selection;

public:
	string next();
	string next(int telOperator);
};

