#include "Circuit.h"
#include "Weather.h"
#include <iostream>
#include "Car.h"
#include <string>

using namespace std;

void Circuit::SetLength(int length) {
	Circuit::length = length;
};

void Circuit::SetWeather(int Condition) {
	Circuit::Conditions = Condition;
};

void Circuit::AddCar(Car* NewCar) {
	if (carCount<5) {
		Cars[carCount] = NewCar;
		carCount++;
	}
	else { cout << "No more empty racer slots leftin the competition" << endl; }
};

void Circuit::Race() {
	for (int i = 0; i < carCount; i++) {
		leaderboard[i] = Cars[i]->RaceStart(Circuit::Conditions, Circuit::length);
	}
};

void Circuit::ShowFinalRanks() {
	float max = 0;
	int maxPosition;
	char* lbName[5];

	for (int i = 0; i < carCount; i++) {
		if (leaderboard[i] > max) { max = leaderboard[i]; maxPosition = i; }
	}
	if (max == 0) { cout << "No single car has managed to finish the race" << endl; }
	else
	{	
		for (int i = 0; i < carCount; i++) {
			float min = max;
			int minPosition = maxPosition;
			for (int j = i; j < carCount; j++) {
				if (leaderboard[j] <= min && leaderboard[j]!=0) {
					min = leaderboard[j];
					minPosition = j;
				}
			}
			Car* auxCar = Cars[i];
			Cars[i] = Cars[minPosition];
			Cars[minPosition] = auxCar;

			float aux = leaderboard[i]; 
			leaderboard[i] = leaderboard[minPosition];
			leaderboard[minPosition] = aux;
		}

		for (int i = 0; i < carCount; i++) {
			if (leaderboard[i] != 0) { cout << "#" << i+1 << " " << Cars[i]->GetName() << " - " << leaderboard[i] << endl; }
		}
	}
}; // it will print the time each car needed to finish the circuit sorted from the fastest car to the slowest.

void Circuit::ShowWhoDidNotFinish() {
	for (int i = 0; i < carCount; i++) {
		if (leaderboard[i] == 0) { cout << Cars[i]->GetName() << endl; }
	}
}; // it is possible that some cars don't have enough fuel to finish the circuit