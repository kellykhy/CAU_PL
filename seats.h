#pragma once
// Flight_Schedule_without_missing.csv
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <vector>
#include "Passenger.h"
	
using namespace std;

#define SEAT_ROW 20

class Seats {
	Passenger seats[SEAT_ROW][2];
	int num_seats = 40; // ¿‹ø©ºÆ

public:
	string ask_seat();
	int get_num_seats();
	void discount_num_seats();
	void reserve(Passenger* passenger);
	void reservation_status();
	bool search(vector<int>& seat_location, string name, string phone_num);
};