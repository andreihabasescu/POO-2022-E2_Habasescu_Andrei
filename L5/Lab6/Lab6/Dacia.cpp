#include "Dacia.h"
#include <iostream>
#include "Weather.h"
#include "Car.h"
#include <string>
using namespace std;

Dacia::Dacia() {
	FuelConsumption = 4;
	FuelCapacity = 125;
	SunSpeed = 80;
	RainSpeed = 45;
	SnowSpeed = 35;
	Name = (char*)"Dacia";
};

float Dacia::RaceStart(int Conditions, int CircuitLength) {
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

char* Dacia::GetName() {
	return Name;
};
