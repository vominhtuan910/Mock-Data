#include "Student.h"
#include "FullName.h"
#include "VnNameGenerator.h"
#include "IDGenerator.h"

int main() {
	Student test;

	for (int i = 0; i < 30; i++)
	{
		cout << test.next().toString();
		cout << endl;
	}

	return 0;
}