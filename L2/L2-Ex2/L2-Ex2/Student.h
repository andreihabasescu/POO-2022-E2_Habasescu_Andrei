#pragma once
#include <string>
using namespace std;
class Student
{
	struct stud {
		string studentName;
		int MathGrade;
		int EnglishGrade;
		int HistoryGrade;
	};

	stud StudentList[10];

	int count;

public:
	void createList();
	void setName();
	string getName();
	int getMath();
	void setMath();
	int getEnglish();
	void setEnglish();
	int getHistory();
	void setHistory();
	float average(int x);
	int compareNames();
	int compareAverage();
	int compareMath();
	int compareHistory();
	int compareEnglish();
};

