#pragma once
#include "Library.h"

class Date{
private:
	int _day;
	int _month;
	int _year;

public:
	// Constructors
	Date();
	Date(int, int, int);

public:
	// Getters
	int day() { return _day; }
	int month() { return _month; }
	int year() { return _year; }

public:
	// Utils
	string toString();
	bool isValid(string);
	static bool isLeapYear(int);
	
};

