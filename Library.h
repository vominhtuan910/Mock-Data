#pragma once

#include <iostream>
#include <string>
#include <ctime>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

enum Major
{
	MATH = 11,
	IT = 12,
	PHYSICS = 13,
	CHEMISTRY = 14,
	BIOLOGY = 15,
	GEOLOGY = 16,
	ENVIRONMENTAL_SCIENCE = 17,
	BIOLOGICAL_TECHNOLOGY = 18,
	MATERIALS_SCIENCE = 19,
	ET_TECHNOLOGY = 20,
	OCEANOGRAPHY = 21,
	NUCLEAR_ENGINEERING = 23,
	CHEMICAL_TECHNOLOGY = 24,
	MATERIAL_TECHNOLOGY = 25,
	MEDICAL_PHYSICS = 26,
	GEOLOGICAL_ENGINEERING = 27,
	DATA_SCIENCE = 28,
};

enum Gender {
	Male = 0,
	Female = 1,
};

enum TelOperator {
	Viettel = 0,
	Mobifone = 1,
	VinaPhone = 2,
	Vietnamobile = 3,
};