#pragma once
// Flight_Schedule_without_missing.csv
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
using namespace std;

class person {
protected:
	string name;
	string phone_num;
public:
	person();
	void set_name(string name);
	void set_phone_num(string phone_num);
	string get_name();
	string get_phone_num();
	virtual string ask_name() = 0;
	virtual string ask_phone_num() = 0;
};