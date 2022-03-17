#pragma once
#include <iostream>
using namespace std;

class Sort

{
    // add data members

    int n;

    int* arr;
 

public:

    Sort(int n, int min, int max); //1

    Sort(int a, int b, int c, int d) ; //2

    Sort(int * a, int n); //3

    Sort(int count, ...); //4

    Sort(string input); //5


    // add constuctors

    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

     ~Sort() {
     };


};
