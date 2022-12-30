#include "EmailGenerator.h"
#include "VnNameGenerator.h"
#include "RandomIntegerGenerator.h"
class VnNameGenerator;


string EmailGenerator::next(FullName name) {
	vector<string>domain = {
		"gmail.com", "apple.com", "amazon.com", "tesla.com", "microsoft.com",
		"outlook.com", "samsung.com", "nvidia.com" , "amd.com", "dell.com"
	};

	stringstream builder;
	auto intGen = RandomIntegerGenerator::instance();

	string first = name.firstName();
	std::transform(first.begin(), first.end(), first.begin(),
		[](unsigned char c) { return std::tolower(c); });

	string middle = name.middleName();
	std::transform(middle.begin(), middle.end(), middle.begin(),
		[](unsigned char c) { return std::tolower(c); });

	string last = name.lastName();
	std::transform(last.begin(), last.end(), last.begin(),
		[](unsigned char c) { return std::tolower(c); });

	int random_domain = intGen->next() % domain.size();
	builder << first[0] << middle[0] << last;
	builder << "@" << domain[random_domain];

	string result = builder.str();
	return result;
}


string EmailGenerator::next() {
	VnNameGenerator nameGen;
	FullName a = nameGen.next();
	auto intGen = RandomIntegerGenerator::instance();
	string result = this->next(a);

	return result;
	
}


