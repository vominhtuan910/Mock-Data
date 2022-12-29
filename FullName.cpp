#include "FullName.h"

string FullName::toString() {
	stringstream builder;
	builder << _firstName << " " << _middleName << " " << _lastName;
	string result = builder.str();

	return result;
}

