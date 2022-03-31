#pragma once
#include "Car.h"

using namespace std;

class Mercedes : public Car {
public:
	Mercedes();
	float RaceStart(int Conditions, int CircuitLength) override;
	char* GetName() override;
};

