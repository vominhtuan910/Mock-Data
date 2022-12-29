#include "IDGenerator.h"
#include "Date.h"

string IDGenerator::next() {
	stringstream builder;
	auto intGen = RandomIntegerGenerator::instance();

	int random_year = intGen->next(14, 22);
	int random_major = intGen->next(11, 28);
	int random_id = intGen->next(0, 9999);

	builder << random_year << random_major;
	builder << setw(4) << setfill('0') << random_id;

	string result = builder.str();
	return result;
}

string IDGenerator::next(int year, int major) {

	if(year >= 1000)
		year = year % 100;

	stringstream builder;
	builder << year << major;

	int random_id = RandomIntegerGenerator::instance()->next(0, 9999);
	builder << setw(4) << setfill('0') << random_id;

	string result = builder.str();
	return result;
}