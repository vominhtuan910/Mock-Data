#include "Address.h"

string Address::toString() {
	stringstream builder;
	builder << _number << ", "
		<< _street << ", "
		<< _ward << ", "
		<< _district << ", "
		<< _city;
	
	string result = builder.str();
	return result;
}



