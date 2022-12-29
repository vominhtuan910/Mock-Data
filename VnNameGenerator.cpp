#include "VnNameGenerator.h"
#include "RandomIntegerGenerator.h"

FullName VnNameGenerator::next() {
	vector<string> firsts ={
		"Nguyen","Tran","Le","Pham","Duong","Huynh","Ngo","Vo","Truong","Bui"
	};

	vector<string> middles[2] = {
		{"Minh","Van","Quoc","Phuoc","Hoang","Gia","Cong"},
		{"Thi","Ngoc","Hoai","Thanh","Huong","Ai","Phuong"}
	};

	vector<string> lasts[2] = {
		{"Tuan","Thai","Trieu","Kien","Tu","Lam","Hung","Khoi","Tri","Dat"},
		{"Hoa","Trinh","Nhi","Thao","Tram","Vy","Nguyet","Chi","Mai","Trang"}
	};

	//////////////////////////////////////////////////////
	FullName _name;
	auto intGen = RandomIntegerGenerator::instance();

	int i = intGen->next() % firsts.size();
	string first = firsts[i];
	_name.setFirstName(first);

	i = intGen->next() % middles[_selection].size();
	string middle = middles[_selection][i];
	_name.setMiddleName(middle);

	i = intGen->next() % lasts[_selection].size();
	string last = lasts[_selection][i];
	_name.setLastName(last);
	
	// Flip selection
	_selection = (_selection + 1) % 2;

	return _name;
}