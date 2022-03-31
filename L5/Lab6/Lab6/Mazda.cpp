#include <iostream>
#include "Weather.h"
#include "Mazda.h"
#include "Car.h"
#include <string>
using namespace std;

Mazda::Mazda() {
	FuelConsumption = 6;
	FuelCapacity = 150;
	SunSpeed = 75;
	RainSpeed = 55;
	SnowSpeed = 40;
	Name = (char*)"Mazda";
};

float Mazda::RaceStart(int Conditions, int CircuitLength) {
	float kmph=0;
	if (Conditions == Sunny) { kmph = Mazda::SunSpeed; } else
		if (Conditions == Rain) { kmph = Mazda::RainSpeed; } else
			if (Conditions == Snow) { kmph = Mazda::SnowSpeed; }
	float time = CircuitLength / kmph; 
	float totalTime = Mazda::FuelCapacity / Mazda::FuelConsumption; 

	if (totalTime >= time) { return time; }
	else {
		return 0;
	}
};

char* Mazda::GetName() {
	return Name;
};