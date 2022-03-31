#include "Toyota.h"
#include <iostream>
#include "Weather.h"
#include "Car.h"
#include <string>
using namespace std;

Toyota::Toyota() {
	FuelConsumption = 4.5;
	FuelCapacity = 140;
	SunSpeed = 78;
	RainSpeed = 58;
	SnowSpeed = 48;
	Name = (char*)"Toyota";
};

float Toyota::RaceStart(int Conditions, int CircuitLength) {
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

char* Toyota::GetName() {
	return Name;
};