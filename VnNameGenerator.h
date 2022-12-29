#pragma once
#include "Library.h"
#include "FullName.h"

class FullName;

class VnNameGenerator
{
private:
	int _selection = Gender::Male;

public:
	FullName next();
};

