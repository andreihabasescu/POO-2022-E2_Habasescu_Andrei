#include "Student.h"
#include <iostream>
using namespace std;
void Student::setName() {
	count++;
	
	cout << endl << "Student #" << count << "'s Name : ";
	cin >> StudentList[count].studentName;
};
string Student::getName() {
	return StudentList[count].studentName;
};
int Student::getMath() {
	return StudentList[count].MathGrade;
};
void Student::setMath() {
	cout << endl << StudentList[count].studentName << "'s Math Grade : ";
	cin >> StudentList[count].MathGrade;
};
int Student::getEnglish() {
	return StudentList[count].EnglishGrade;
};
void Student::setEnglish() {
	cout << endl << StudentList[count].studentName << "'s English Grade : ";
	cin >> StudentList[count].EnglishGrade;
};
int Student::getHistory() {
	return StudentList[count].HistoryGrade;
};
void Student::setHistory() {
	cout << endl << StudentList[count].studentName << "'s History Grade : ";
	cin >> StudentList[count].HistoryGrade;
};
float Student::average(int x) {
	if (x == 0) { x += 1; }
	float avg = ((StudentList[x].HistoryGrade + StudentList[x].EnglishGrade + StudentList[x].MathGrade) / 3);
	cout << endl << "The average of " << StudentList[x].studentName << " is " << avg;
	return avg;
};

void Student::createList() {
	count = 0;
};

int Student::compareNames() {
	if (StudentList[1].studentName == StudentList[2].studentName) { cout << "Student #1 and Student #2 have the same name" << endl; return 0; }
	else
	{
		cout << StudentList[1].studentName << "'s and " << StudentList[2].studentName << "'s names are different" << endl;
		return -1;
	}
};
int Student::compareAverage() {
	float aux = Student::average(1) - Student::average(2);
	if (aux==0) { return 0; } else 
		if (aux < 0) { return -1; }
		else { return 1; }
};
int Student::compareMath() {
	if (StudentList[1].MathGrade == StudentList[2].MathGrade) { return 0; }
	else
		if (StudentList[1].MathGrade > StudentList[2].MathGrade) { return 1; }
		else { return -1; };
};
int Student::compareHistory() {
	if (StudentList[1].HistoryGrade == StudentList[2].HistoryGrade) { return 0; }
	else
		if (StudentList[1].HistoryGrade > StudentList[2].HistoryGrade) { return 1; }
		else { return -1; };
};
int Student::compareEnglish() {
	if (StudentList[1].EnglishGrade == StudentList[2].EnglishGrade) { return 0; }
	else
		if (StudentList[1].EnglishGrade > StudentList[2].EnglishGrade) { return 1; }
		else { return -1; };
};