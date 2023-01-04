// Flight_Schedule_without_missing.csv
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include "Passenger.h"

using namespace std;
#define MAX_DATA 80
#define COL 7

Passenger::Passenger() {
	meal = false;
	extra_baggage = false;
}
bool Passenger::is_meal() {
	return meal;
}
bool Passenger::is_extra_baggage() {
	return extra_baggage;
}
void Passenger::register_meal() {
	meal = true;
}
void Passenger::register_extra_baggage() {
	extra_baggage = true;
}

// ask(입력) 메소드
string Passenger::ask_name() {
	string s;
	cout << "-------------------------------------" << endl;
	cout << "승객의 성함을 입력 하시오." << endl;
	cout << "-------------------------------------" << endl;
	cin >> s;
	return s;
}
string Passenger::ask_phone_num() {
	string s;
	cout << "-------------------------------------" << endl;
	cout << "승객의 전화번호를 입력 하시오." << endl;
	cout << "-------------------------------------" << endl;
	cin >> s;
	return s;
}