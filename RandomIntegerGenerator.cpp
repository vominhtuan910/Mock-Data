#include "RandomIntegerGenerator.h"

RandomIntegerGenerator::RandomIntegerGenerator() {
    srand(time(NULL));
}

shared_ptr<RandomIntegerGenerator> RandomIntegerGenerator::instance() {
    if (_instance == NULL) {
        auto temp = new RandomIntegerGenerator();
        _instance = shared_ptr<RandomIntegerGenerator>(temp);
    }

    return _instance;
}

int RandomIntegerGenerator::next() {
    return rand();
}

int RandomIntegerGenerator::next(int left, int right) {
    int result = rand() % (right - left + 1) + left;
    return result;
}

double RandomIntegerGenerator::dnext(double lower_bound, double upper_bound) {
    double result = lower_bound + static_cast<double>(rand()) /
        (static_cast <double> (RAND_MAX / (upper_bound - lower_bound)));

    return result;
}