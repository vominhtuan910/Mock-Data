#pragma once
#include "Library.h"

class Address {
private:
	string _number;
	string _street;
	string _ward;
	string _district;
	string _city;

public:
	string toString();
};