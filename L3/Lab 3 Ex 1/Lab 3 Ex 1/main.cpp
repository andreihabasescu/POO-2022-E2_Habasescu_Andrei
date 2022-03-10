#include <iostream>
#include "Math.h"
using namespace std;

int main()
{
    int alpha = 11; int beta = 22; int gamma = 33;
    //adding ints
    cout << "2IntAdd : " << alpha << " + " << beta << " = " << Math::Add(alpha, beta) << endl;
    cout << "3IntAdd : " << alpha << " + " << beta << " + " << gamma << " = " << Math::Add(alpha, beta, gamma) << endl;

    //adding doubles
    double alphaL = 5; double betaL = 7; double gammaL = 9;

    cout << "2DoubleAdd : " << alphaL << " + " << betaL << " = " << Math::Add(alphaL, betaL) << endl;
    cout << "3DoubleAdd : " << alphaL << " + " << betaL << " + " << gammaL << " = " <<  Math::Add(alphaL, betaL, gammaL) << endl;

    //Mul ints
    cout << "Mul2Ints : " << alpha << " * " << beta << " = " << Math::Mul(alpha, beta) << endl;
    cout << "Mul3Ints : " << alpha << " * " << beta << " * " << gamma << " = " << Math::Mul(alpha, beta, gamma) << endl;

    //Mul doubles
    cout<<"Mul2Doubles : " << alphaL << " * " << betaL << " = " << Math::Mul(alphaL, betaL) << endl;
    cout << "Mul3Doubles : " << alphaL << " * " << betaL << " * " << gammaL << " = " << Math::Mul(alphaL, betaL, gammaL) << endl;

    // adding char arrays
    const char * a = "alpha";
    const char * b = "beta";
    memset(&b, 0, sizeof(b));

    char* c = Math::Add(a, b);
    if (c == NULL) { cout << "WARNING : One of the strings is null" << endl; }
    else { cout << c << endl; }

    // adding variable number of arguments
    cout << Math::Add(3, 4, 5, 6) << endl;



}
