#include <iostream>
#include <stdarg.h>
#include "Math.h"
using namespace std;

int Math::Add(int x, int y) {
	return x + y;
};

int Math::Add(int x, int y, int z) {
	return x + y + z;
};

int Math::Add(double x, double y) {
	return x + y;
};

int Math::Add(double x, double y, double z) {
	return x + y + z;
};

int Math::Mul(int x, int y) {
	return x * y;
};

int Math::Mul(int x, int y, int z) {
	return x * y * z;
};

int Math::Mul(double x, double y) {
	return x * y;
};

int Math::Mul(double x, double y, double z) {
	return x * y * z;
};

int Math::Add(int count, ...) {
	va_list valist;
	int i,sum=0;
	va_start(valist, count); 
	for (i = 0; i < count; i++) { 
		sum += va_arg(valist, int);
	}
	va_end(valist); 
	return sum;
}; 

char* Math::Add(const char* a, const char* b) {
	char *ans = new char[255];
	if (a != NULL && b != NULL) {
		strcpy(ans, a);
		strcat(ans, b);
	}
	else return NULL;
	return ans;
};