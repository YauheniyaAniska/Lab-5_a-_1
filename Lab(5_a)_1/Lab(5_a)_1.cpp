// lab(5a)_1.cpp: ���������� ����� ����� ��� ����������� ����������.
//1. ������� ������� ����� ������������� �������� � ����������� 
//������ ������������, ����������, ��������. ���������� ����� � ��������� ���������
//���������� � ������ ������ ������������ ���������.

#include "stdafx.h"
#include <iostream>
#include "name.h"

using namespace std;

int main()
{
	int amount_people;
	cin >> amount_people;
	int amount_cargo;
	cin >> amount_cargo;
	int distance;
	cin >> distance;
	Auto X;
	X.money(amount_cargo, amount_people);
	X.time(distance);
	X.show();
	Bike Y;
	Y.money(amount_cargo, amount_people);
	Y.time(distance);
	Y.show();
	Wagon Z;
	Z.money(amount_cargo, amount_people);
	Z.time(distance);
	Z.show();
	system("pause");
    return 0;
}


