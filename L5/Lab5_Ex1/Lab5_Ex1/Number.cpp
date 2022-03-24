#include "Number.h"
#include <iostream>
using namespace std;

int TrueValue(int base, string value) {
	int output = 0;
	if (base >= 2 && base <= 10) {
		for (int i = value.length() - 1; i >= 0; i--) {
			output += (value[i] - 48) * pow(base, value.length() - i - 1);
		}
	}
	else if (base >= 11 && base <= 16) {
		for (int i = value.length() - 1; i >= 0; i--) {
			if (value[i] >= '0' && value[i] <= '9') { output += (value[i] - 48) * pow(base, value.length() - i - 1); }
			else
				if (value[i] >= 'A' && value[i] <= 'F') { output += (value[i] - 55) * pow(base, value.length() - i - 1); }
		}
	}
	return output;

};

string DecimalToBase(int value, int base) {
	string output = "";

	if (base >= 2 && base <= 10) {
		while (value > 0) {
			int remainder = value % base;
			char aux = remainder + '0';
			output = aux + output;
			value = value / base;
		}
	}
	else if (base >=11 && base<=16) {
		while (value > 0) {
			int remainder = value % base;
			if (remainder >= 0 && remainder <= 9) {
				char aux = remainder + '0';
				output = aux + output;
			}
			else if (remainder >= 10 && remainder <= 15) {
				char aux = remainder + 55;
				output = aux + output;
			}
			value = value / base;
		}
	}

	return output;
};

Number::Number(const char* value, int base) {
	Number::value = value;
	Number::base = base;
};

Number::Number(const Number& x) { 
	value = x.value;
	base = x.base;
};

Number& Number::operator=(const Number&& x) {
	this->base = x.base;
	this->value = x.value;
}; 

Number::Number(Number&& x)
	: value("")
	, base(10)
{
	value = x.value;
	base = x.base;

	x.base = 10;
	x.value = "";
};

Number::Number() {
	value = "0";
	base = 10;
};

void Number::SwitchBase(int newBase) {
	int prevBase = Number::base;
	Number::base = newBase;
	int value = TrueValue(prevBase, Number::value);
	string newValue = DecimalToBase(value, newBase);

	Number::value = newValue;
};

void Number::Print() {
	cout << "Value : " << Number::value << endl;
	cout << "Base : " << Number::base << endl;
};

int Number::GetDigitsCount() {
	return Number::value.length();
}; // returns the number of digits for the current number

int Number::GetBase() {
	return Number::base;
}; // returns the current base

string Number::GetValue() {
	return Number::value;
}

Number operator+(const Number& x, const Number& y) {
	Number aux;

	int sum = TrueValue(x.base, x.value) + TrueValue(y.base, y.value);
	string output="";
	if (x.base > y.base) {
		output = DecimalToBase(sum,x.base);
		aux.base = x.base;
	}
	else { output = DecimalToBase(sum, y.base); aux.base = y.base; }

	aux.value = output;

	return aux;
};

Number operator-(const Number& x, const Number& y) {
	Number aux;

	int sum = TrueValue(x.base, x.value) - TrueValue(y.base, y.value);
	string output = "";
	if (x.base > y.base) {
		output = DecimalToBase(sum, x.base);
		aux.base = x.base;
	}
	else { output = DecimalToBase(sum, y.base); aux.base = y.base; }

	aux.value = output;

	return aux;
};

int Number::operator>(Number& x) {
	int output = 0;
	int a = TrueValue(base, value);
	int b = TrueValue(x.base, x.value);
	if (a > b) { output = 1; }

	return output;
}

int Number::operator>=(Number& x) {
	int output = 0;
	int a = TrueValue(base, value);
	int b = TrueValue(x.base, x.value);
	if (a >= b) { output = 1; }

	return output;
}

int Number::operator==(Number& x) {
	int output = 0;
	int a = TrueValue(base, value);
	int b = TrueValue(x.base, x.value);
	if (a == b) { output = 1; }

	return output;
}

int Number::operator!=(Number& x) {
	int output = 0;
	int a = TrueValue(base, value);
	int b = TrueValue(x.base, x.value);
	if (a != b) { output = 1; }

	return output;
}

int Number::operator<=(Number& x) {
	int output = 0;
	int a = TrueValue(base, value);
	int b = TrueValue(x.base, x.value);
	if (a <= b) { output = 1; }

	return output;
}

int Number::operator<(Number& x) {
	int output = 0;
	int a = TrueValue(base, value);
	int b = TrueValue(x.base, x.value);
	if (a < b) { output = 1; }

	return output;
}

Number Number::operator--(int) {
	
	if (value.length() > 1) { value = value.substr(0, value.length() - 1); }
	else {
		value = "0";
	}
	return *this;
};

Number& Number::operator--() {
	Number temp = *this;
	if (value.length() > 1) { value = value.substr(1, value.length()); }
	else {
		value = "0";
	}
	return temp;
};

char Number::operator[](int x) {
	return value[x];
};