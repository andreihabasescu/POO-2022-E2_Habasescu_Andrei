#pragma once
#include "Car.h"

using namespace std;

class Mazda : public Car {
public:
	Mazda();
	float RaceStart(int Conditions, int CircuitLength) override;
	char* GetName() override;
};

