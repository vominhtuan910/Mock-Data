#include "GPAGenerator.h"
#include "RandomIntegerGenerator.h"

int GPAGenerator::_selection = Rank::Good; // default rank is good

double GPAGenerator::next(int rank) {
	auto doGen = RandomIntegerGenerator::instance();
	double result = 0;
	_selection = rank;

	switch (_selection) {
	case Rank::Excellent:
		result = doGen->dnext(8.5, 10);
		break;

	case Rank::Good:
		result = doGen->dnext(7.0, 8.4);
		break;

	case Rank::Average:
		result = doGen->dnext(5.5, 6.9);
		break;

	case Rank::Below_Average:
		result = doGen->dnext(4.0, 5.4);
		break;

	case Rank::Weak:
		result = doGen->dnext(0, 3.9);
		break;
	default:
		throw("Error");
		break;
	}

	result = round(result * 100) / 100;
	return result;
}

double GPAGenerator::next() {
	double result = this->next(_selection);

	// Flip selection
	_selection = (_selection + 1) % 5;

	return result;
}


