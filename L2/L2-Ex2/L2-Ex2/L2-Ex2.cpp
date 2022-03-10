#include <iostream>
#include "Student.h"

int main()
{
	Student n;

	n.createList();
	n.setName();
	cout << n.getName() << " ";
	n.setEnglish();
	n.setHistory();
	n.setMath();

	n.setName();
	n.setEnglish();
	n.setHistory();
	n.setMath();

	cout << endl << n.compareAverage() << endl;
}