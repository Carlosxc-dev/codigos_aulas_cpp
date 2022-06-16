#include <iostream>
#include "q1.h"
using namespace std;
int main()
{
    CVetor<int> a(5);
    CVetor<double> b(3);
    cin >> a;
    cout << "A desordenado: " << a << endl;
    a.ordena();
    cout << "A ordenado: " << a << endl;
    cin >> b;
    cout << "B desordenado: " << b << endl;
    b.ordena();
    cout << "B ordenado: " << b << endl;
    try
    {
        cout << b[5] << endl;
    }
    catch (out_of_range &ex)
    {
        cout << "out_of_range: " << ex.what() << endl;
    }
    return 0;
}
