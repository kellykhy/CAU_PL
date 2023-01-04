// Flight_Schedule_without_missing.csv
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include "person.h"
using namespace std;
#define MAX_DATA 80
#define COL 7

person::person() {
	name = "NA";
	phone_num = "NA";
}
// set 메소드
void person::set_name(string name_input) {
	name = name_input;
}
void person::set_phone_num(string phone_num_input) {
	phone_num = phone_num_input;
}

// get 메소드
string person::get_name() {
	return name;
}
string person::get_phone_num() {
	return phone_num;
}