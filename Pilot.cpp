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
	cout << "���Ϸ� ID�� �Է��Ͻÿ�." << endl;
	cout << "-------------------------------------" << endl;
	cin >> s;
	return s;
}
// ask(�Է�) �޼ҵ�
string Pilot::ask_name() {
	string s;
	cout << "-------------------------------------" << endl;
	cout << "���Ϸ����� ������ �Է� �Ͻÿ�." << endl;
	cout << "-------------------------------------" << endl;
	cin >> s;
	return s;
}
string Pilot::ask_phone_num() {
	string s;
	cout << "-------------------------------------" << endl;
	cout << "���Ϸ����� ��ȭ��ȣ�� �Է� �Ͻÿ�." << endl;
	cout << "-------------------------------------" << endl;
	cin >> s;
	return s;
}