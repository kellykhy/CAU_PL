#include "seats.h"


string Seats::ask_seat() {
	cout << "-------------------------------------" << endl;
	cout << "좌석 번호를 입력하십시오." << endl;
	cout << "ex) 2열 1번 -> 2 1" << endl;
	cout << "-------------------------------------" << endl;
	string in;
	//cin.ignore();
	getline(cin, in);

	return in;
}

int Seats::get_num_seats() {
	return num_seats;
}

void Seats::discount_num_seats() {
	num_seats = num_seats - 1;
}


void Seats::reservation_status() { // 해당 비행기 좌석 예약 현황 보여주기
	cout << "-------------------------------------" << endl;
	cout << "선택하신 항공편의 좌석 예약 현황입니다." << endl;
	cout << "-------------------------------------" << endl;
	cout << "잔여석은 " << num_seats << "개입니다." << endl;
	for (int i = 0; i < SEAT_ROW; i++) {
		if (seats[i][0].get_name() == "NA")
			cout << "o";
		else
			cout << "r";
		cout << " ";
		if (seats[i][1].get_name() == "NA")
			cout << "o";
		else
			cout << "r";
		cout << endl;
	}
}

void Seats::reserve(Passenger* new_passenger) {
	int row, col;
	reservation_status();
	cin.ignore();
	while (1) {
		string row_col = ask_seat();

		// row_col으로부터 비행기 좌석 행, 열(1 or 2) 얻어내기
		string row_s = (row_col.substr(0, row_col.find(' ')));
		string col_s = (row_col.substr(row_col.find(' ') + 1, 1));

		row = stoi(row_s);
		col = stoi(col_s);

		if (seats[row - 1][col - 1].get_name() == "NA") {
			seats[row - 1][col - 1] = *new_passenger;
			cout << "-- 선택하신 좌석은 " << row << "열 " << col << "번" << "좌석이며, 성공적으로 예약되었습니다. --" << endl << endl;
			discount_num_seats();
			//reservation_status();
			break;
		}
		else {
			cout << "해당 좌석은 이미 예약된 좌석입니다." << endl;
			cout << "다시 선택해주세요." << endl;
		}
	}
	
}

bool Seats::search(vector<int>& seat_location, string name, string phone_num) {
	for (int i = 0; i < SEAT_ROW; i++)
		for (int j = 0; j < 2; j++) {
			if (seats[i][j].get_name() == name && seats[i][j].get_phone_num() == phone_num) {
				seat_location.push_back(i + 1);
				seat_location.push_back(j + 1);
				return true;
			}
		}
	return false;
}