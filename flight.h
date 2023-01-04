#pragma once
// Flight_Schedule_without_missing.csv
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <vector>
#include "seats.h"
#include "Passenger.h"

using namespace std;

class flight {
private:
	Seats flight_seats;
	string flightNumber;
	string airline;
	string origin;
	string destination;
	string dayOfWeek;
	string scheduledDepartureTime;
	string scheduledArrivalTime;

public:
	void set_flightNumber(string);
	void set_airline(string);
	void set_origin(string);
	void set_destination(string);
	void set_dayOfWeek(string);
	void set_scheduledDepartureTime(string);
	void set_scheduledArrivalTime(string);
	string get_flightNumber();
	string get_airline();
	string get_origin();
	string get_destination();
	string get_dayOfWeek();
	string get_scheduledDepartureTime();
	string get_scheduledArrivalTime();

	void reserve();
	bool search_reservation_status(vector<int>& seat_location, string name, string phone_num);
};