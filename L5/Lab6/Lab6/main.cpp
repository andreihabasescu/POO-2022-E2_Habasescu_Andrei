#include <iostream>
#include <string>
#include "Circuit.h"
#include "Weather.h"
#include "Car.h"
#include "Toyota.h"
#include "Mercedes.h"
#include "Dacia.h"
#include "Ford.h"
using namespace std;

int main()

{

	Circuit c;

	c.SetLength(100);

	c.SetWeather(Weather::Rain);

	c.AddCar(new Mazda());

	c.AddCar(new Toyota());

	c.AddCar(new Mercedes());

	c.AddCar(new Ford());

	c.AddCar(new Dacia());

	c.Race();

	c.ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the   slowest.

	c.ShowWhoDidNotFinish(); // it is possible that some cars don't have enough fuel to finish the circuit

	return 0;

}
