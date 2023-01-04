#include "flight.h"

void flight::set_flightNumber(string s) {
	flightNumber = s;
}
void flight::set_airline(string s) {
	airline = s;
}
void flight::set_origin(string s) {
	origin = s;
}
void flight::set_destination(string s) {
	destination = s;
}
void flight::set_dayOfWeek(string s){
	dayOfWeek = s;
}
void flight::set_scheduledDepartureTime(string s) {
	scheduledDepartureTime = s;
}
void flight::set_scheduledArrivalTime(string s) {
	scheduledArrivalTime = s;
}
string flight::get_flightNumber() {
	return flightNumber;
}
string flight::get_airline() {
	return airline;
}
string flight::get_origin() {
	return origin;
}
string flight::get_destination() {
	return destination;
}
string flight::get_dayOfWeek() {
	return dayOfWeek;
}
string flight::get_scheduledDepartureTime() {
	return scheduledDepartureTime;
}
string flight::get_scheduledArrivalTime() {
	return scheduledArrivalTime;
}


void flight::reserve() {	
	Passenger* new_passenger = new Passenger();
	new_passenger->set_name(new_passenger->ask_name());
	new_passenger->set_phone_num(new_passenger->ask_phone_num());
	
	flight_seats.reserve(new_passenger);
}

bool flight::search_reservation_status(vector<int>& seat_location, string name, string phone_num) {
	return flight_seats.search(seat_location, name, phone_num);
}