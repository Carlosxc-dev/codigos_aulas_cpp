#include <iostream>
#include "bigint.h"
using namespace std;

int main(int argc, char const *argv[])
{

    BigInt a, b;

    cout << "Digite o valor de A: ";
    cin >> a;
    cout << "Digite o valor de B: ";
    cin >> b;
    cout << "A+B = " << a + b << endl;
    if (a >= b)
        cout << "A-B = " << a - b << endl;
    if (a < b)
        cout << a << " < " << b << endl;
    if (a > b)
        cout << a << " > " << b << endl;
    if (a <= b)
        cout << a << " <= " << b << endl;
    if (a >= b)
        cout << a << " >= " << b << endl;
    if (a == b)
        cout << a << " = " << b << endl;
    if (a != b)
        cout << a << " != " << b << endl;

    return 0;
}