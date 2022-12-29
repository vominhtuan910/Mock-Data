#include "Student.h"
#include "RandomIntegerGenerator.h"
#include "IDGenerator.h"
#include "EmailGenerator.h"
#include "VnTelNumberGenerator.h"

// Forward declaration
class EmailGenerator;
class IDGenerator;
class VnNameGenerator;
class VnTelNumberGenerator;

string Student::toString() {
	stringstream builder;
	builder << _id << " | ";
	builder << _fullName.toString() << " | ";
	//builder << _address.toString() << " | ";
	builder << _telNumber << " | ";
	builder << _email << " | ";


	string result = builder.str();
	return result;
}

Student Student::next() {
	IDGenerator idGen;
	VnNameGenerator nameGen;
	EmailGenerator emailGen;
	VnTelNumberGenerator telNumberGen;


	_id = idGen.next();
	_fullName = nameGen.next();
	_email = emailGen.next(_fullName);
	_telNumber = telNumberGen.next();

	return *this;
}