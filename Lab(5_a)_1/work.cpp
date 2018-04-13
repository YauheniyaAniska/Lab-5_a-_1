#include "stdafx.h"
#include <iostream>
#include "name.h"
using namespace std;

int Transport :: money_t(int amount_cargo, int amount_people, int count_people, int count_cargo) {
	all_money = count_people*amount_people + count_cargo * amount_cargo;
	return all_money;
};
int Transport :: time_t(int distance, int count_time) {
	int temp = distance;
	all_time = temp * count_time;
	return all_time;
};
void Transport :: show_t() {
	cout << "money: " << all_money << " time: " << all_time << endl;
};