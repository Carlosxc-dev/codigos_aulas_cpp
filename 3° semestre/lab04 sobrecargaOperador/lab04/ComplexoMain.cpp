#include <iostream>
#include <cmath>
#include "Complexo.h"
using namespace std;
int main()
{
    Complexo a(1, 2);
    Complexo b(3, 4);
    Complexo aux;
    int ans;
    cout << "Digite os valores de A e B: ";
    cin >> a >> b;
    cout << "A: " << a << " // B: " << b << endl;
    cout << "A + B: " << a + b << endl;
    cout << "A - B: " << a - b << endl;
    cout << "A * B: " << a * b << endl;
    cout << "A / B: " << a / b << endl;
    if (a != b)
        cout << a << " != " << b << endl;
    if (a == b)
        cout << a << " = " << b << endl;
}