#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string>
#include "Info_about_card.h"
#include "Credit_card.h"
#include "Privat_card.h"
#include "Mono_card.h"
#include "Money.h"
#include "max_sum_in_month.h"
using namespace std;

void Menu() {
	typedef map<double, string> MyMap;
	typedef MyMap::iterator Iter;
	MyMap m;
	Iter it;


	vector<Credit_card*> credit_card; // работа с динамическим массивом который может работать с выделенной паматью 
	vector<privat_card*> Privat_card;
	vector<mono_card*> Mono_card;
	vector<Money*> money;
	int credit_counter = 0;
	int privat_counter = 0;
	int mono_counter = 0;
	int money_counter = 0;

	ofstream report("Report.txt");
	ofstream out_report;
	ifstream in_report;

	int day = 0;
	string line;

	string number_card;
	int choose, case1, case2, case3, case4, case5;
	int case3_1, case3_2, case3_3, case3_4, case3_5;
	bool exit = false;
	while (exit != true) {
		cout << "\n1. Add\n2. Show\n3. Entering costs\n4. Expense Report\n5. Exit\n-> ";
		cin >> choose;
		switch (choose) {
		case 1:
			cout << "\n1. Credit card\n2. Privat card\n 3. Mono card\n4. Money\n-> "; // в первом кейсе добавл€ем информаию о карте 
			cin >> case1;
			switch (case1) {
			case 1:
				credit_card.push_back(new Credit_card());
				credit_card[credit_counter]->Input();
				credit_counter++;
				break;

			case 2:
				Privat_card.push_back(new privat_card());
				Privat_card[privat_counter]->Input();
				privat_counter++;
				break;

			case 3:
				Mono_card.push_back(new mono_card());
				Mono_card[mono_counter]->Input();
				mono_counter++;
				break;

			case 4:
				money.push_back(new Money());
				money[money_counter]->Input();
				money_counter++;
				break;
			}
			break;

		case 2:
			cout << "\n1. Credit card\n2. Privat card\n 3. Mono card\n4. Money\n5. All\n-> "; // выбираем карту и смотрим информацию по карте 
			cin >> case2;
			switch (case2) {
			case 1:
				cout << "\nEnter number of card: ";
				cin >> number_card;
				cout << endl;
				for (int i = 0; i < credit_card.size(); i++) {
					if (number_card == credit_card[i]->Numberofcredit()) {
						credit_card[i]->Print();
					}
				}
				cin.ignore();
				break;

			case 2:
				cout << "\nEnter number of privat card: ";
				cin >> number_card;
				cout << endl;
				for (int i = 0; i < Privat_card.size(); i++) {
					if (number_card == Privat_card[i]->NumberOfCardprivat()) {
						Privat_card[i]->Print();
					}
				}
				cin.ignore();
				break;

			case 3:
				cout << "\nEnter number of mono card: ";
				cin >> number_card;
				cout << endl;
				for (int i = 0; i < Mono_card.size(); i++) {
					if (number_card == Mono_card[i]->NumberOfMonoCard()) {
						Mono_card[i]->Print();
					}
				}
				cin.ignore();
				break;

			case 4:
				cout << "Enter number of money: ";
				cin >> number_card;
				cout << endl;
				for (int i = 0; i < money.size(); i++) {
					if (number_card == money[i]->Number_money()) {
						money[i]->Print();
					}
				}
				cin.ignore();
				break;

			case 5:
				for (int i = 0; i < credit_card.size(); i++) {
					cout << "\nCredit card " << i + 1 << endl;
					credit_card[i]->Print();
					cout << endl;
				}
				for (int i = 0; i < Privat_card.size(); i++) {
					cout << "\Privat card " << i + 1 << endl;
					Privat_card[i]->Print();
					cout << endl;
				}
				for (int i = 0; i < money.size(); i++) {
					cout << "Money " << i + 1 << endl;
					money[i]->Print();
					cout << endl;
				}
				break;
			}
			break;

		case 3:
			cout << "\n1. Clothes\n2. Sport\n3. Food\n4. Video game\n-> ";
			cin >> case3;
			switch (case3) {
			case 1:
				cout << "\nChoose card:" << endl;
				cout << "1. Credit card\n2. privat card\n3. mono card\n-> ";
				cin >> case3_1;
				switch (case3_1) {
				case 1:
					cout << "Enter number of card: ";
					cin >> number_card;
					for (int i = 0; i < credit_card.size(); i++) {
						if (number_card == credit_card[i]->Numberofcredit()) {
							credit_card[i]->Clothescredit();
							cout << endl;
						}
					}
					cin.ignore();
					break;

				case 2:
					cout << "Enter number of privat card: ";
					cin >> number_card;
					for (int i = 0; i < Privat_card.size(); i++) {
						if (number_card == Privat_card[i]->NumberOfCardprivat()) {
							Privat_card[i]->Clothes_privat();
							cout << endl;
						}
					}
					cin.ignore();
					break;
				case 3:
					cout << "Enter number of mono card: ";
					cin >> number_card;
					for (int i = 0; i < Mono_card.size(); i++) {
						if (number_card == Mono_card[i]->NumberOfMonoCard()) {
							Mono_card[i]->Clothes_mono();
							cout << endl;
						}
					}
					cin.ignore();
					break;
				}
				break;


			case 2:
				cout << "\nChoose card:" << endl;
				cout << "1. Credit card\n2. privat card\n3. mono card\n-> ";
				cin >> case3_2;
				switch (case3_2) {
				case 1:
					cout << "Enter number of card: ";
					cin >> number_card;
					for (int i = 0; i < credit_card.size(); i++) {
						if (number_card == credit_card[i]->Numberofcredit()) {
							credit_card[i]->PurchasesCosts();
							cout << endl;
						}
					}
					cin.ignore();
					break;

				case 2:
					cout << "Enter number of card: ";
					cin >> number_card;
					for (int i = 0; i < Privat_card.size(); i++) {
						if (number_card == Privat_card[i]->NumberOfCardprivat()) {
							Privat_card[i]->getsportsprivat();
							cout << endl;
						}
					}
					cin.ignore();
					break;
				case 3:
					cout << "Enter number of card: ";
					cin >> number_card;
					for (int i = 0; i < Mono_card.size(); i++) {
						if (number_card == Mono_card[i]->NumberOfMonoCard()) {
							Mono_card[i]->getsport_mono();
							cout << endl;
						}
					}
				}
				break;

			case 3:
				cout << "\nChoose card:" << endl;
				cout << "1. Credit card\n2. privat card\n3. mono card\n-> ";
				cin >> case3_3;
				switch (case3_3) {
				case 1:
					cout << "Enter number of credit card: ";
					cin >> number_card;
					for (int i = 0; i < credit_card.size(); i++) {
						if (number_card == credit_card[i]->Numberofcredit()) {
							credit_card[i]->FoodCosts();
							cout << endl;
						}
					}
					cin.ignore();
					break;

				case 2:
					cout << "Enter number of privat card: ";
					cin >> number_card;
					for (int i = 0; i < Privat_card.size(); i++) {
						if (number_card == Privat_card[i]->NumberOfCardprivat()) {
							Privat_card[i]->getFoodprivat();
							cout << endl;
						}
					}
					cin.ignore();
					break;
				case 3:
					cout << "Enter number of mono card: ";
					cin >> number_card;
					for (int i = 0; i < Mono_card.size(); i++) {
						if (number_card == Mono_card[i]->NumberOfMonoCard()) {
							Mono_card[i]->getFood_mono();
							cout << endl;
						}
					}
				}
				break;

			case 4:
				cout << "\nChoose card:" << endl;
				cout << "1. Credit card\n2. privat card\n3. mono card\n-> ";
				cin >> case3_4;
				switch (case3_4) {
				case 1:
					cout << "Enter number of card: ";
					cin >> number_card;
					for (int i = 0; i < credit_card.size(); i++) {
						if (number_card == credit_card[i]->Numberofcredit()) {
							credit_card[i]->EntertainmentCosts();
							cout << endl;
						}
					}
					cin.ignore();
					break;

				case 2:
					cout << "Enter number of card: ";
					cin >> number_card;
					for (int i = 0; i < Privat_card.size(); i++) {
						if (number_card == Privat_card[i]->NumberOfCardprivat()) {
							Privat_card[i]->getvideogameprivat();
							cout << endl;
						}
					}
					cin.ignore();
					break;
				case 3:
					cout << "Enter number of card: ";
					cin >> number_card;
					for (int i = 0; i < Mono_card.size(); i++) {
						if (number_card == Mono_card[i]->NumberOfMonoCard()) {
							Mono_card[i]->getVideo_game_mono();
							cout << endl;
						}
					}
				}
				break;
			}
			break;

		case 4:
			out_report.open("Save report.txt");
			in_report.open("Save report.txt");
			cout << "\n1. Credit card\n2. privat card\n3. mono card\n-> ";
			cin >> case4;
			if (case4 == 1) {
				cout << "\nEnter number of credit card: ";
				cin >> number_card;
				cout << endl;
				for (int i = 0; i < credit_card.size(); i++) {
					if (number_card == credit_card[i]->Numberofcredit()) {
						m.emplace(make_pair(credit_card[i]->Clothescredit(), "Clothes: "));
						m.emplace(make_pair(credit_card[i]->Sportcredit(), "Sport: "));
						m.emplace(make_pair(credit_card[i]->Foodcredit(), "Food: "));
						m.emplace(make_pair(credit_card[i]->Videogamecradet(), "Vidoe game: "));
					}
				}
				cin.ignore();
			}
			else if (case4 == 2) {
				cout << "\nEnter number of privat card: ";
				cin >> number_card;
				cout << endl;
				for (int i = 0; i < Privat_card.size(); i++) {
					if (number_card == Privat_card[i]->NumberOfCardprivat()) {
						m.emplace(make_pair(Privat_card[i]->getsportprivat(), "Clothes: "));
						m.emplace(make_pair(Privat_card[i]->getsportsprivat(), "Sport: "));
						m.emplace(make_pair(Privat_card[i]->getFoodprivat(), "Food: "));
						m.emplace(make_pair(Privat_card[i]->getvideogameprivat(), "Video game: "));
					}
				}
				cin.ignore();
				if (case4 == 3) {
					cout << "\nEnter number of privat card: ";
					cin >> number_card;
					cout << endl;
					for (int i = 0; i < Mono_card.size(); i++) {
						if (number_card == Mono_card[i]->NumberOfMonoCard()) {
							m.emplace(make_pair(Mono_card[i]->getclothes_mono(), "Clothes: "));
							m.emplace(make_pair(Mono_card[i]->getsport_mono(), "Sport: "));
							m.emplace(make_pair(Mono_card[i]->getFood_mono(), "Food: "));
							m.emplace(make_pair(Mono_card[i]->getVideo_game_mono(), "Video game: "));
						}
					}
					cin.ignore();
				}
			}
			cout << "\n1. spend money on the first day\n2.  spend money on the week\n-> ";// «атраты за первый день и за неделю 
			cin >> case4;
			if (case4 == 1) {
				day++; // ƒень увеличиваетьс€ на один до 7 не превыша€ 7 
				out_report << day << endl;
				for (it = m.end(); it != m.begin(); ) {
					it--;
					out_report << it->second << it->first << endl;
				} m.clear();
				if (day == 1) {
					while (!in_report.eof()) {
						if (line == to_string(day) || line != to_string(day + 1)) {
							getline(in_report, line);
							report << line << endl;
						}
					}
					cout << "Finished..." << endl;
				}
			}
			else if (case4 == 2) {
				day++;
				out_report << day << endl;
				for (it = m.end(); it != m.begin(); ) {
					it--;
					out_report << it->second << it->first << endl;
				} m.clear();
				if (day == 7) {
					while (!in_report.eof()) {
						if (line == to_string(day) || line != to_string(day + 1)) {
							getline(in_report, line);
							report << line << endl;
						}
					}
					cout << "Finished..." << endl;
				}
			}
			out_report.close();
			in_report.close();
			break;

		case 5:
			exit = true;
			break;
		}
	}

}