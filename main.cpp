#include "flight.h"
#include "flights.h"
#include "Passenger.h"
#include "menu.h"
using namespace std;
#define MAX_DATA 80
#define COL 7


int main(){
	flights flight_data;
	int rating = 0;
	while (1) 
	{
		int Menu_num = Menu::main_menu();
		if (Menu_num == 1) // 1. 예약
		{
			flight_data.reserve();
		}
		else if (Menu_num == 2) // 2. 예약현황
		{
			flight_data.search_reservation();
		}
		else if (Menu_num == 3) { // 3. 종료하기
			rating = Menu::ask_for_rating();
			break;
		}
	}

	return 0;
}

/*
string data[MAX_DATA][COL];
	string str_buf;
	fstream fs;
	fs.open("Flight_Schedule_without_missing.csv", ios::in);

	int n = 0;

	if (fs) {
		getline(fs, str_buf);
		while (getline(fs, str_buf))
		{
			istringstream iss(str_buf);
			string token;
			while (getline(iss, token, ',')) {
				//cout << token << endl << endl;
				data[n / COL][n++ % COL] = token;
			}
		}
	}
	fs.close();

	for (int i = 0; i < MAX_DATA; i++) {
		for (int j = 0; j < COL; j++)
			cout << data[i][j] << ' ';
		cout << endl;
	}
	*/