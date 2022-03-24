#include <iostream>
#include "Number.h"
using namespace std;

int main()
{
    Number n{ "20",10 };
    Number m("2", 10);
    Number x = n + m;
    cout << "X Value : " << x.GetValue() << endl;
    cout <<"N>M? :" << (n>m) << endl;
    n.Print();

    Number k = m;
    k.Print();

    --n;
    n.Print();
}
