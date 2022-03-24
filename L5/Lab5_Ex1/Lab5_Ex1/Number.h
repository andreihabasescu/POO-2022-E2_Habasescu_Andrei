#include <iostream>
#pragma once
using namespace std;

class Number

{

	int base = 10;

	string value = "";

	// add data members

public:

	Number(const char* value, int base); // where base is between 2 and 16

	Number(const Number& x); //Copy Constructor

	Number& operator=(const Number&& x); //Move Assignment

	Number(Number&& x); //Move Constructor

	Number();


	// add operators and copy/move constructor
	friend Number operator+(const Number& x, const Number& y);

	friend Number operator-(const Number& x, const Number& y);

	int operator>(Number& x);

	int operator>=(Number& x);

	int operator==(Number& x);

	int operator!=(Number& x);

	int operator<=(Number& x);

	int operator<(Number& x);

	char operator[](int x);

	Number& operator--();

	Number operator--(int);

	void SwitchBase(int newBase);

	void Print();

	int  GetDigitsCount(); // returns the number of digits for the current number

	int  GetBase(); // returns the current base

	string GetValue();

};
