#pragma once
#include <iostream>
#include "Info_about_card.h"
#include "max_sum_in_month.h"
using namespace std;

class Credit_card : public info_about_card, public max_sum_in_month {
private:
	int credit_limite;
	double amount_money;

public:
	Credit_card() : info_about_card() {
		credit_limite = 0;
		amount_money = 0;
	}
	Credit_card(int cl, double am, string n, string s, string bn, string num, string ed, int cvv) : info_about_card(n, s, bn, num, ed, cvv) {
		credit_limite = cl;
		amount_money = am;
	}

	void TaxCosts() {
		int answer;
		cout << "Enter amount of money spent of clothes: ";
		cin >> answer;
		Clothes += answer;
		amount_money -= Clothes;
	}
	void PurchasesCosts() {
		int answer;
		cout << "Enter amount of money spent of sport: ";
		cin >> answer;
		sport += answer;
		amount_money -= sport;
	}
	void FoodCosts() {
		int answer;
		cout << "Enter amount of money spent of food: ";
		cin >> answer;
		food += answer;
		amount_money -= food;
	}
	void EntertainmentCosts() {
		int answer;
		cout << "Enter amount of money spent of video_game: ";
		cin >> answer;
		video_game += answer;
		amount_money -= video_game;
	}

	string Numberofcredit() {
		return number;
	}
	double Clothescredit() {
		return Clothes;
	}
	double Sportcredit() {
		return sport;
	}
	double Foodcredit() {
		return food;
	}
	double Videogamecradet() {
		return video_game;
	}

	void Input() {
		InputCard();
		cout << "Enter credit limite: ";
		cin >> credit_limite;
		cout << "Enter balance account: ";
		cin >> amount_money;
		while (amount_money > credit_limite) {
			amount_money = 0;
			cout << "\nError\nEnter again: ";
			cin >> amount_money;
		}
		cout << endl;
	}
	void Print() {
		PrintCard();
		cout << "Credit limite: " << credit_limite << endl;
		cout << "Account balance: " << amount_money << endl;
	}



};
