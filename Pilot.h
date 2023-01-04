#pragma once
// Flight_Schedule_without_missing.csv
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include "person.h"
using namespace std;

class Pilot:public person
{
	int pilot_id;
	string sub_pilot;
public:
	int get_pilot_id();
	string get_sub_pilot();
	string ask_pilot_id();
	string ask_name();
	string ask_phone_num();
};