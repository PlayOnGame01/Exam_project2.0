#pragma once
#include <iostream>
#include <string>
using namespace std;

class info_about_card{
protected:
	string name;
	string surname;
	string bank_name;
	string number;
	string end_date;
	int cvv;

public:
	info_about_card() = default;
	info_about_card(string n, string s, string bn, string num, string ed, int cvv) {
		name = n;
		surname = s;
		bank_name = bn;
		number = num;
		this->cvv = cvv;
		end_date = ed;
	}
	info_about_card(info_about_card& obj) {
		name = obj.name;
		surname = obj.surname;
		bank_name = obj.bank_name;
		number = obj.number;
		cvv = obj.cvv;
		end_date = obj.end_date;
	}

	void InputCard() {
		cout << endl;
		cout << "Enter your name: ";
		cin >> name; //¬вод имени
		cout << "Enter your surname: ";
		cin >> surname;//¬вод фамилии
		cout << "Enter name of bank: ";
		cin >> bank_name;//¬вод им€ банка
		cout << "Enter number of your card: ";
		cin >> number;//¬вод номер карты
		cout << "Enter date: ";
		cin >> end_date;//¬вод даты рождени€
		cout << "Enter your cvv code: ";
		cin >> cvv;//¬вод трех задних цифыр
		while (cvv < 100 || cvv > 999) { // ¬вод цифр не больше 3 если будет больше 3 тогда выдаст ошибку 
			cvv = 0;
			cout << "\nError\nEnter again: ";// ошибка
			cin >> cvv;
		}
	}
	void PrintCard() {
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Bank: " << bank_name << endl;
		cout << "Card number: " << number << endl;
		cout << "CVV code: " << cvv << endl;
		cout << "Date: " << end_date << endl;
	}

};
