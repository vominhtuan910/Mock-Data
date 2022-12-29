#pragma once
#include <iostream>
#include <memory>
using namespace std;

class RandomIntegerGenerator {
private:
	inline static shared_ptr<RandomIntegerGenerator> _instance = NULL;
	RandomIntegerGenerator();

public:
	static shared_ptr<RandomIntegerGenerator> instance();

	int next();
	int next(int, int);
};

