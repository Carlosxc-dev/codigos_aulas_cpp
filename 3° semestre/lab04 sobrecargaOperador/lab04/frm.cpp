#include <iostream>
#include "fr.h"
using namespace std;
int main()
{
    CFracao a, b;
    cout << "Fracao A: ";
    cin >> a;
    cout << "Fracao B: ";
    cin >> b;
    cout << "Fracao A + B: " << a + b << endl;
    cout << "Fracao A - B: " << a - b << endl;
    cout << "Fracao A * B: " << a * b << endl;
    cout << "Fracao A / B: " << a / b << endl;
    if (a < b)
        cout << a << " < " << b << endl;
    if (a <= b)
        cout << a << " <= " << b << endl;
    if (a > b)
        cout << a << " > " << b << endl;
    if (a >= b)
        cout << a << " >= " << b << endl;
    if (a != b)
        cout << a << " != " << b << endl;
    if (a == b)
        cout << a << " = " << b << endl;
}