// Flight_Schedule_without_missing.csv
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include "Pilot.h"

using namespace std;
#define MAX_DATA 80
#define COL 7

int Pilot::get_pilot_id() {
	return pilot_id;
}
string Pilot::get_sub_pilot() {
	return sub_pilot;
}
string Pilot::ask_pilot_id() {
	string s;
	cout << "-------------------------------------" << endl;
	cout << "파일럿 ID를 입력하시오." << endl;
	cout << "-------------------------------------" << endl;
	cin >> s;
	return s;
}
// ask(입력) 메소드
string Pilot::ask_name() {
	string s;
	cout << "-------------------------------------" << endl;
	cout << "파일럿님의 성함을 입력 하시오." << endl;
	cout << "-------------------------------------" << endl;
	cin >> s;
	return s;
}
string Pilot::ask_phone_num() {
	string s;
	cout << "-------------------------------------" << endl;
	cout << "파일럿님의 전화번호를 입력 하시오." << endl;
	cout << "-------------------------------------" << endl;
	cin >> s;
	return s;
}