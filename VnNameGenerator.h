#pragma once
#include "Library.h"
#include "FullName.h"

class FullName;

class VnNameGenerator
{
private:
	static int _selection;

public:
	FullName next();
};

