#pragma once
#include "Car.h"

using namespace std;

class Toyota : public Car {
public:
	Toyota();
	float RaceStart(int Conditions, int CircuitLength) override;
	char* GetName() override;
};

