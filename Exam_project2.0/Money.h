#pragma once
#include <iostream>
using namespace std;

class Money {
private:
	string name;
	string surname;
	string number;

public:
	Money() = default;
	Money(string n, string s, string num) {
		name = n;
		surname = s;
		number = num;
	}

	string Number_money() { //Информация о кошильке 
		return number;
	}

	void Input() {
		cout << endl;
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter surname: ";
		cin >> surname;
		cout << "Enter number of wallet: ";
		cin >> number;
		cout << endl;
	}
	void Print() {
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Number of wallet: " << number << endl;
	}
};
