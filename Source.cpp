#include "Student.h"
#include "FullName.h"
#include "VnNameGenerator.h"
#include "IDGenerator.h"

int main() {
	ofstream readData("mockData.txt",ios::out);
	Student test;
	string temp;

	for (int i = 0; i < 30; i++)
	{
		temp = test.next().toString();
		cout << temp;
		cout << endl;
		readData << temp << endl;
	}
	readData.close();

	return 0;
}