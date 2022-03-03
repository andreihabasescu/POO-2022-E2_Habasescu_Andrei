#include "NumberList.h"
#include <iostream>
using namespace std;

void NumberList::Init() {
    count = 0;
};          // count will be 0

bool NumberList::Add(int x) {
    numbers[count] = x;
    if (count >= 10) { return false; }
    else { count++; return true; }

};      // adds X to the numbers list and increase the data member count.

                      // if count is bigger or equal to 10, the function will return false

void NumberList::Sort() {
    for (int i = 0; i < 10; i++) {
        int min = numbers[i], position = i;
        for (int j = i; j < 10; j++) {
            if (numbers[j] < min) { min = numbers[j]; position = j; }
        }
        if (position != i) {
            int aux = numbers[i];
            numbers[i] = numbers[position];
            numbers[position] = aux;
        }
    }
};          // will sort the numbers vector

void NumberList::Print() {
    for (int i = 0; i < count; i++) {
        std::cout << numbers[i] << " ";
    }
};         // will print the current vector
