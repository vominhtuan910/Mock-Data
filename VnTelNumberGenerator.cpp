#include "VnTelNumberGenerator.h"
#include "RandomIntegerGenerator.h"

string VnTelNumberGenerator::next() {
	vector<string>viettel = {
		"086", "096" ,"097", "098" , "032", "033" ,"034","035","036","037"
	};

	vector<string>mobifone = {
		"090" , "093", "070" , "076", "077", "078", "079", "089"
	};

	vector<string>vinaphone = {
		"088", "091", "094", "083", "084", "085", "081", "082"
	};

	vector<string>vietnammobile = {
		"092", "056" , "058"
	};
	
	stringstream builder;
	auto intGen = RandomIntegerGenerator::instance();
	int i;

	switch (_selection){
		case TelOperator::Viettel:
			i = intGen->next() % viettel.size();
			builder << viettel[i];
			break;

		case TelOperator::Mobifone:
			i = intGen->next() % mobifone.size();
			builder << mobifone[i];
			break;

		case TelOperator::VinaPhone:
			i = intGen->next() % vinaphone.size();
			builder << vinaphone[i];
			break;

		case TelOperator::Vietnamobile:
			i = intGen->next() % vietnammobile.size();
			builder << vietnammobile[i];
			break;
	default:
		throw("Error");
		break;
	}

	for (int j = 0; j < 7; j++)
	{
		int rn = intGen->next(0, 9);
		builder << rn;
	}


	//Flip selection
	_selection = (_selection + 1) % 5;

	string result = builder.str();
	return result;
}


string VnTelNumberGenerator::next(int telOperator) {
	vector<string>viettel = {
		"086", "096" ,"097", "098" , "032", "033" ,"034","035","036","037"
	};

	vector<string>mobifone = {
		"090" , "093", "070" , "076", "077", "078", "079", "089"
	};

	vector<string>vinaphone = {
		"088", "091", "094", "083", "084", "085", "081", "082"
	};

	vector<string>vietnammobile = {
		"092", "056" , "058"
	};

	stringstream builder;
	auto intGen = RandomIntegerGenerator::instance();
	int i;
	_selection %= 5; // prevent users from entering numbers greater than 4

	switch (_selection) {
	case TelOperator::Viettel:
		i = intGen->next() % viettel.size();
		builder << viettel[i];
		break;

	case TelOperator::Mobifone:
		i = intGen->next() % mobifone.size();
		builder << mobifone[i];
		break;

	case TelOperator::VinaPhone:
		i = intGen->next() % vinaphone.size();
		builder << vinaphone[i];
		break;

	case TelOperator::Vietnamobile:
		i = intGen->next() % vietnammobile.size();
		builder << vietnammobile[i];
		break;
	default:
		throw("Error");
		break;
	}

	for (int j = 0; j < 7; j++)
	{
		int rn = intGen->next(0, 9);
		builder << rn;
	}

	string result = builder.str();
	return result;
}