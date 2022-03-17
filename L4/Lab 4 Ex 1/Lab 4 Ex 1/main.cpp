#include <iostream>
#include "Sort.h"
using namespace std;

int main()
{
    Sort n(5,5,55); //Random Numbers

    int a[] = {15, 5, 17, 2, 99}; //Assigning an array
    Sort b(a,5);

    Sort c{5, 9, 13, 2};
    
    Sort d(5,15,3,1,7,9); //Variable No. of Args

    Sort e("1,5,2,54,3,39"); //String To Array

    //n.QuickSort();

    //n.BubbleSort(true);

    n.InsertSort(true);

    n.Print();
}
