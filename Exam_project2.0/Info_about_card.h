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
	string data;
	int cvv;

public:
	info_about_card() = default;
	info_about_card(string n, string s, string bn, string num, string ed, int cvv) {
		name = n;
		surname = s;
		bank_name = bn;
		number = num;
		this->cvv = cvv;
		data = ed;
	}
	info_about_card(info_about_card& obj) {
		name = obj.name;
		surname = obj.surname;
		bank_name = obj.bank_name;
		number = obj.number;
		cvv = obj.cvv;
		data = obj.data;
	}

	void InputCard() {
		cout << endl;
		cout << "Enter your name: ";
		cin >> name; //���� �����
		cout << "Enter your surname: ";
		cin >> surname;//���� �������
		cout << "Enter name of bank: ";
		cin >> bank_name;//���� ��� �����
		cout << "Enter number of your card: ";
		cin >> number;//���� ����� �����
		cout << "Enter date: ";
		cin >> data;//���� ���� ��������
		cout << "Enter your cvv code: ";
		cin >> cvv;//���� ���� ������ �����
		while (cvv < 100 || cvv > 999) { // ���� ���� �� ������ 3 ���� ����� ������ 3 ����� ������ ������ 
			cvv = 0;
			cout << "\nError\nEnter again: ";// ������
			cin >> cvv;
		}
	}
	void PrintCard() {
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Bank: " << bank_name << endl;
		cout << "Card number: " << number << endl;
		cout << "CVV code: " << cvv << endl;
		cout << "Date: " << data << endl;
	}

};
