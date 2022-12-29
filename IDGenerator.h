#pragma once

#include "Library.h"
#include "RandomIntegerGenerator.h"


class IDGenerator{
public:
	string next();
	string next(int year, int major);
};

