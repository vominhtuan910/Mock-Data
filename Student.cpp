#include "Student.h"
#include "RandomIntegerGenerator.h"
#include "IDGenerator.h"
#include "EmailGenerator.h"
#include "VnTelNumberGenerator.h"
#include "GPAGenerator.h"
#include "BirthdayGenerator.h"

// Forward declaration
class EmailGenerator;
class IDGenerator;
class VnNameGenerator;
class VnTelNumberGenerator;
class GPAGenerator;
class BirthdayGenerator;

string Student::toString() {
	stringstream builder;
	builder << _id << " | ";
	builder << _fullName.toString() << " | ";
	builder << _birthDay.toString() << " | ";
	//builder << _address.toString() << " | ";
	builder << _telNumber << " | ";
	builder << _email << " | ";
	builder << _gpa;

	string result = builder.str();
	return result;
}

Student Student::next() {
	IDGenerator idGen;
	VnNameGenerator nameGen;
	BirthdayGenerator dobGen;
	EmailGenerator emailGen;
	VnTelNumberGenerator telNumberGen;
	GPAGenerator gpaGen;

	_id = idGen.next();
	_fullName = nameGen.next();
	_birthDay = dobGen.next();
	_email = emailGen.next(_fullName);
	_telNumber = telNumberGen.next();
	_gpa = gpaGen.next();

	return *this;
}