#pragma once
#include "Car.h"

using namespace std;

class Dacia : public Car {
public:
	Dacia();
	float RaceStart(int Conditions, int CircuitLength) override;
	char* GetName() override;
};



