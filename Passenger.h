#pragma once
// Flight_Schedule_without_missing.csv
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include "person.h"
using namespace std;

class Passenger:public person
{
	bool meal;
	bool extra_baggage;

public:
	Passenger();
	bool is_meal();
	bool is_extra_baggage();
	void register_meal();
	void register_extra_baggage();
	string ask_name();
	string ask_phone_num();
};