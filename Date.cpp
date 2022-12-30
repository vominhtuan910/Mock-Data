#include "Date.h"


Date::Date() {
	struct tm newtime;
	time_t now = time(0);
	localtime_s(&newtime, &now);

	_year = (int)newtime.tm_year + 1900;
	_month = (int)newtime.tm_mon + 1;
	_day = (int)newtime.tm_mday;
}

Date::Date(int d, int m, int y) {
	_day = d;
	_month = m;
	_year = y;

	
}

bool Date::isLeapYear(int y) {
	if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
		return true;

	return false;
}

string Date::toString() {
	stringstream builder;

	builder << setw(2) << setfill('0') << _day << "/"
		<< setw(2) << setfill('0') << _month << "/" << _year;

	string result = builder.str();
	return result;
}


