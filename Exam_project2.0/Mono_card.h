#pragma once
#include <iostream>
#include "info_about_card.h"
#include "max_sum_in_month.h"
using namespace std;

class mono_card : public info_about_card, public max_sum_in_month {
private:
	int bank_account;
	long balance_account;

public:
	mono_card() : info_about_card() {
		bank_account = 0;
		balance_account = 0;
	}
	mono_card(int ba, long am, string n, string s, string bn, string num, string ed, int cvv) : info_about_card(n, s, bn, num, ed, cvv) {
		bank_account = ba;
		balance_account = am;
	}

	void Clothes_mono() {
		int answer;
		cout << "Enter money spent for clothes: ";
		cin >> answer;
		Clothes += answer;
		balance_account -= Clothes;
	}
	void Sport_mono() {
		int answer;
		cout << "Enter money spent for sport: ";
		cin >> answer;
		sport += answer;
		balance_account -= sport;
	}
	void Food_mono() {
		int answer;
		cout << "Enter money spent for food: ";
		cin >> answer;
		food += answer;
		balance_account -= food;
	}
	void Video_game_mono() {
		int answer;
		cout << "Enter money spent on the video game: ";
		cin >> answer;
		video_game += answer;
		balance_account -= video_game;
	}

	string NumberOfMonoCard() {
		return number;
	}
	double getclothes_mono() {
		return Clothes;
	}
	double getsport_mono() {
		return sport;
	}
	double getFood_mono() {
		return food;
	}
	double getVideo_game_mono() {
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
			cout << "\nError\nEnter again: ";
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