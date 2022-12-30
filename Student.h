#pragma once
#include "Library.h"
#include "VnNameGenerator.h"
#include "Address.h"
#include "Date.h"
using namespace std;

class FullName;
class Address;
class Date;


class Student{
private:
	string _id;
	FullName _fullName;
	Address _address;
	string _email;
	string _telNumber;
	Date _birthDay;
	double _gpa;

public:
	Student next();
	string toString();

};

