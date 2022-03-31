#include "Mercedes.h"
#include <iostream>
#include "Weather.h"
#include "Car.h"
#include <string>
using namespace std;

Mercedes::Mercedes() {
	FuelConsumption = 5;
	FuelCapacity = 130;
	SunSpeed = 90;
	RainSpeed = 65;
	SnowSpeed = 55;
	Name = (char*)"Mercedes";
};

float Mercedes::RaceStart(int Conditions, int CircuitLength) {
	float kmph = 0;
	if (Conditions == Sunny) { kmph = SunSpeed; }
	else
		if (Conditions == Rain) { kmph = RainSpeed; }
		else
			if (Conditions == Snow) { kmph = SnowSpeed; }
	float time = CircuitLength / kmph;
	float totalTime = FuelCapacity / FuelConsumption;

	if (totalTime >= time) { return time; }
	else {
		return 0;
	}
};

char* Mercedes::GetName() {
	return Name;
};