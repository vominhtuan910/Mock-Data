#pragma once

#include "Library.h"

class VnTelNumberGenerator {
private:
	int _selection = TelOperator::Viettel; // default

public:
	string next();
	string next(int telOperator);
};

