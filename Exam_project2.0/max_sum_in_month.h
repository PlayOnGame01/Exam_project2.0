#pragma once
#include <iostream>
using namespace std;

class max_sum_in_month {
protected:
	double Clothes;
	double sport;
	double food;
	double video_game;

public:
	max_sum_in_month() {
		Clothes = 0;
		sport = 0;
		food = 0;
		video_game = 0;
	}
	max_sum_in_month(double cl, double sp, double fo, double vg) {
		Clothes = cl;
		sport = sp;
		food = fo;
		video_game = vg;
	}

	void Printmax_sum_in_month() {
		cout << "Clothes costs: " << Clothes << endl;
		cout << "Sport costs: " << sport << endl;
		cout << "Food costs: " << food << endl;
		cout << "Viseo game costs: " << video_game << endl;
	}

};
