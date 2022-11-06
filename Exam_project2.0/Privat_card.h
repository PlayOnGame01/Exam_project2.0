#pragma once
#include <iostream>
#include "info_about_card.h"
#include "max_sum_in_month.h"
using namespace std;

class privat_card : public info_about_card, public max_sum_in_month {
private:
	int bank_account;
	long balance_account;

public:
	privat_card() : info_about_card() {
		bank_account = 0;
		balance_account = 0;
	}
	privat_card(int ba, long am, string n, string s, string bn, string num, string ed, int cvv) : info_about_card(n, s, bn, num, ed, cvv) {
		bank_account = ba;
		balance_account = am;
	}

	void Clothes_privat() {
		int answer;
		cout << "Enter money spent for clothes: ";
		cin >> answer;
		Clothes += answer;
		balance_account -= Clothes;
	}
	void Sport_privat() {
		int answer;
		cout << "Enter money spent for sport: ";
		cin >> answer;
		sport += answer;
		balance_account -= sport;
	}
	void Food_privat() {
		int answer;
		cout << "Enter money spent for food: ";
		cin >> answer;
		food += answer;
		balance_account -= food;
	}
	void Video_game_privat() {
		int answer;
		cout << "Enter money spent on the video game: ";
		cin >> answer;
		video_game += answer;
		balance_account -= video_game;
	}

	string NumberOfCardprivat() {
		return number;
	}
	double getsportprivat() {
		return Clothes;
	}
	double getsportsprivat() {
		return sport;
	}
	double getFoodprivat() {
		return food;
	}
	double getvideogameprivat() {
		return video_game;
	}

	void Input() {
		InputCard();
		cout << "Enter bank account: ";
		cin >> bank_account;
		cout << "Enter balance account: ";
		cin >> balance_account;
		while (balance_account > bank_account) {
			balance_account = 0;
			cout << "\nError\nEnter again: "; // ошибка 
			cin >> balance_account;
		}
		cout << endl;
	}
	void Print() {
		PrintCard();
		cout << "Bank account: " << bank_account << endl;
		cout << "Balance account: " << balance_account << endl;
	}
};