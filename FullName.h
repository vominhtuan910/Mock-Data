#pragma once

#include "Library.h"

class FullName
{
private:
	string _firstName;
	string _middleName;
	string _lastName;

public:
	// Setters
	void setFirstName(string text) { _firstName = text; }
	void setMiddleName(string text) { _middleName = text; }
	void setLastName(string text) { _lastName = text; }
	
	// Getters
	string firstName() { return _firstName; }
	string middleName() { return _middleName; }
	string lastName() { return _lastName; }

	//Utils
	string toString();
	
};

