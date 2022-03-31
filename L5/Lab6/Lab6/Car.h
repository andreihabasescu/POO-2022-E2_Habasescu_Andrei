#pragma once
class Car {
protected:
	float FuelConsumption;
	float FuelCapacity;
	float SunSpeed;
	float RainSpeed;
	float SnowSpeed;
	char* Name;

public:

	virtual float RaceStart(int Conditions, int CircuitLength) = 0;

	virtual char* GetName() = 0;
};
