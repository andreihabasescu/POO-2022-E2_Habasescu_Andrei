#include "Ford.h"
#include <iostream>
#include "Weather.h"
#include "Car.h"
#include <string>
using namespace std;

Ford::Ford() {
	FuelConsumption = 6.5;
	FuelCapacity = 170;
	SunSpeed = 85;
	RainSpeed = 62;
	SnowSpeed = 52;
	Name = (char*)"Ford";
};

float Ford::RaceStart(int Conditions, int CircuitLength) {
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

char* Ford::GetName() {
	return Name;
};