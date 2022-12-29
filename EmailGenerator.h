#pragma once
#include "Library.h"
#include "FullName.h"
class FullName;

class EmailGenerator
{
public:
	string next(); // random whole of email
	string next(FullName name); // random with given full name, just random domain name
};

