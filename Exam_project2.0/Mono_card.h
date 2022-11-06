#pragma once
#include <iostream>
#include "info_about_card.h"
#include "max_sum_in_month.h"
using namespace std;

class mono_card : public info_about_card, public max_sum_in_month {
private:
	int card_info;
	long money_on_card;

public:
	mono_card() : info_about_card() {
		card_info = 0;
		money_on_card = 0;
	}
	mono_card(int ba, long am, string n, string s, string bn, string num, string ed, int cvv) : info_about_card(n, s, bn, num, ed, cvv) {
		card_info = ba;
		money_on_card = am;
	}

	void Clothes_mono() {
		int answer;
		cout << "Enter money spent for clothes: ";
		cin >> answer;
		Clothes += answer;
		money_on_card -= Clothes;
	}
	void Sport_mono() {
		int answer;
		cout << "Enter money spent for sport: ";
		cin >> answer;
		sport += answer;
		money_on_card -= sport;
	}
	void Food_mono() {
		int answer;
		cout << "Enter money spent for food: ";
		cin >> answer;
		food += answer;
		money_on_card -= food;
	}
	void Video_game_mono() {
		int answer;
		cout << "Enter money spent on the video game: ";
		cin >> answer;
		video_game += answer;
		money_on_card -= video_game;
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
		cin >> card_info;
		cout << "Enter balance account: ";
		cin >> money_on_card;
		while (money_on_card > card_info) {
			money_on_card = 0;
			cout << "\nError\nEnter again: ";
			cin >> money_on_card;
		}
		cout << endl;
	}
	void Print() {
		PrintCard();
		cout << "Bank account: " << card_info << endl;
		cout << "Balance account: " << money_on_card << endl;
	}
};