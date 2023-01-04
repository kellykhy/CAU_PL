#pragma once
// Flight_Schedule_without_missing.csv
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <iomanip>
#include <vector>
#include "flight.h"
using namespace std;
#define MAX_DATA 80
#define COL 7

class flights {
private:
	flight flight_list[MAX_DATA];
	vector<int> idxs;

public:
	flights();
	flight get_flight(int idx);

	string ask_org();
	string ask_dst();
	string ask_day();
	int ask_flight_option();

	bool search_matching(string org, string dst, string day); // ����ڰ� �����, ������, ������ �Է��ϸ� ������ �װ���� index�� ã�Ƽ� ���ͷ� ��ȯ 
	void show_flight_options(); // ����ڰ� �� �� �ֵ��� �װ��� �ɼǵ��� ������
	void reserve();
	bool search_reservation();
};