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

bool Date::isValid(string da) {
	bool flag = true;
	if (_year > 0 && _day > 0) {
		switch (_month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (_day > 31) flag = false;
			break;

		case 4:
		case 6:
		case 9:
		case 11:
			if (_day > 30) flag = false;
			break;

		case 2:
			if (isLeapYear(_year)) {
				if (_day > 29) flag = false;
			}
			else {
				if (_day > 28) flag = false;
			}
			break;

		default:
			flag = false;
			break;
		}
	}
	return flag;
}

string Date::toString() {
	stringstream builder;

	builder << setw(2) << setfill('0') << _day << "/"
		<< setw(2) << setfill('0') << _month << "/" << _year;

	string result = builder.str();
	return result;
}


