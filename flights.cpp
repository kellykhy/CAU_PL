#include "flights.h"

flights::flights() {
	string str_buf;
	fstream fs;
	fs.open("Flight_Schedule_without_missing.csv", ios::in);
	int n = 0;

	if (fs) {
		getline(fs, str_buf);
		while (getline(fs, str_buf))
		{
			string data[COL];
			istringstream iss(str_buf);
			string token;
			int m = 0;
			while (getline(iss, token, ',')) {
				data[m++] = token;
			}
			this->flight_list[n].set_flightNumber(data[0]);
			this->flight_list[n].set_airline(data[1]);
			this->flight_list[n].set_origin(data[2]);
			this->flight_list[n].set_destination(data[3]);
			this->flight_list[n].set_dayOfWeek(data[4]);
			this->flight_list[n].set_scheduledDepartureTime(data[5]);
			this->flight_list[n++].set_scheduledArrivalTime(data[6]);
		}
	}
	fs.close();
}

flight flights::get_flight(int idx) {
	return flight_list[idx];
}

string flights::ask_org() {
	cout << "-------------------------------------" << endl;
	cout << "출발지를 입력하십시오." << endl;
	cout << "-------------------------------------" << endl;
	string in;
	cin >> in;
	return in;
}
string flights::ask_dst() {
	cout << "-------------------------------------" << endl;
	cout << "도착지를 입력하십시오." << endl;
	cout << "-------------------------------------" << endl;
	string in;
	cin >> in;
	return in;
}
string flights::ask_day() {
	cout << "-------------------------------------" << endl;
	cout << "요일를 입력하십시오." << endl;
	cout << "-------------------------------------" << endl;
	string in;
	cin >> in;
	return in;
}
int flights::ask_flight_option() {
	cout << "항공편을 선택해주세요." << endl;
	cout << "-------------------------------------" << endl;
	int in;
	cin >> in;
	return in;
}


bool flights::search_matching(string org, string dst, string day) {
	for (int idx = 0; idx < MAX_DATA; idx++) {
		if (this->flight_list[idx].get_origin() == org && this->flight_list[idx].get_destination() == dst && this->flight_list[idx].get_dayOfWeek() == day)
			idxs.push_back(idx);
	}
	if (idxs.size()) {
		cout << endl << day << "에 " << org << "에서 " << dst << "로 가는 항공편은 아래 같습니다." << endl;
		show_flight_options();
		return true;
	}
	else
		cout << "해당 출발지, 도착지, 요일에는 항공편이 편성되어 있지 않습니다." << endl << endl;
	return false;
}

void flights::show_flight_options() {

	vector<int>::iterator it;
	int n = 1;
	cout << setw(15) << "    Flight Number |" << setw(14) << "Airline   |" << setw(15) << "Arrival Time |" << setw(15) << "Departure Time" << endl;
	cout << "   ------------------------------------------------------------" << endl;
	for (it=idxs.begin(); it != idxs.end(); it++)
		cout << n++ << ". " << setw(11) << this->flight_list[*it].get_flightNumber()
		<< setw(15) << this->flight_list[*it].get_airline()
		<< setw(15) << this->flight_list[*it].get_scheduledArrivalTime()
		<< setw(17) << this->flight_list[*it].get_scheduledDepartureTime() << endl;
	cout << endl;
}

void flights::reserve(	) {
	string origin = ask_org();
	string destination = ask_dst();
	string day = ask_day();
	if (search_matching(origin, destination, day)) {
		int i = ask_flight_option();
		flight_list[idxs[i - 1]].reserve();
	}
	idxs.clear();
}

bool flights::search_reservation() {
	vector<int> seat_location;
	int flag = 0;
	string name, phone_number;
	cout << "이름을 입력하세요. ";
	cin >> name;
	cout << "전화번호를 입력하세요. ";
	cin >> phone_number;
	cout << endl;
	cout << setw(20) << "airline" << setw(15) << "flight number" << setw(15) << "Day of Week" << setw(11) << "seat" << endl;
	cout << "            ---------------------------------------------------" << endl; 
	for (int i = 0; i < MAX_DATA; i++) {
		if (flight_list[i].search_reservation_status(seat_location, name, phone_number)) {
			cout << setw(20) << flight_list[i].get_airline() << setw(14) << flight_list[i].get_flightNumber() << setw(16) << flight_list[i].get_dayOfWeek() << setw(5) << seat_location[0] << "열" << setw(2) << seat_location[1] << "번" << endl;
			flag = 1;
		}
	}
	cout << endl;
	if (flag == 1) return true;
	cout << "해당하는 예약 정보를 찾을 수 없습니다." << endl << endl;
	return false;
}