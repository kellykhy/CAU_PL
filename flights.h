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

	bool search_matching(string org, string dst, string day); // 사용자가 출발지, 도착지, 요일을 입력하면 가능한 항공편들 index를 찾아서 벡터로 반환 
	void show_flight_options(); // 사용자가 고를 수 있도록 항공편 옵션들을 보여줌
	void reserve();
	bool search_reservation();
};