#include "seats.h"


string Seats::ask_seat() {
	cout << "-------------------------------------" << endl;
	cout << "�¼� ��ȣ�� �Է��Ͻʽÿ�." << endl;
	cout << "ex) 2�� 1�� -> 2 1" << endl;
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


void Seats::reservation_status() { // �ش� ����� �¼� ���� ��Ȳ �����ֱ�
	cout << "-------------------------------------" << endl;
	cout << "�����Ͻ� �װ����� �¼� ���� ��Ȳ�Դϴ�." << endl;
	cout << "-------------------------------------" << endl;
	cout << "�ܿ����� " << num_seats << "���Դϴ�." << endl;
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

		// row_col���κ��� ����� �¼� ��, ��(1 or 2) ����
		string row_s = (row_col.substr(0, row_col.find(' ')));
		string col_s = (row_col.substr(row_col.find(' ') + 1, 1));

		row = stoi(row_s);
		col = stoi(col_s);

		if (seats[row - 1][col - 1].get_name() == "NA") {
			seats[row - 1][col - 1] = *new_passenger;
			cout << "-- �����Ͻ� �¼��� " << row << "�� " << col << "��" << "�¼��̸�, ���������� ����Ǿ����ϴ�. --" << endl << endl;
			discount_num_seats();
			//reservation_status();
			break;
		}
		else {
			cout << "�ش� �¼��� �̹� ����� �¼��Դϴ�." << endl;
			cout << "�ٽ� �������ּ���." << endl;
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