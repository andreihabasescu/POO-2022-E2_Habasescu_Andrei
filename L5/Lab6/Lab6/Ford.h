#pragma once
#include "Car.h"

using namespace std;

class Ford : public Car {
public:
	Ford();
	float RaceStart(int Conditions, int CircuitLength) override;
	char* GetName() override;
};

