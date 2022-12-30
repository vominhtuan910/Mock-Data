#pragma once
#include "Library.h"

class GPAGenerator
{
private:
	static int _selection;

public:
	double next();
	double next(int); // random with given rank
};

