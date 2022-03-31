#pragma once
#include "Circuit.h"
#include "Weather.h"
#include <iostream>
#include "Car.h"
using namespace std;

class Circuit
{
	int length = 0;

	int carCount = 0;

	int Conditions;

	Car* Cars[5];

	float leaderboard[5];

public :

	void SetLength(int length);

	void SetWeather(int Conditions);

	void AddCar(Car *NewCar);

	void Race();

	void ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the   slowest.

	void ShowWhoDidNotFinish(); // it is possible that some cars don't have enough fuel to finish the circuit

};

