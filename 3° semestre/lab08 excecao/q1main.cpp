#include <iostream>
#include "q1.h"
using namespace std;
int main()
{
    Polinomio a(3), b(4), c(4);
    cin >> a >> b;
    cout << a << endl;
    cout << b << endl;
    c = b - a;
    cout << c << endl;
    c = a + b;
    cout << c << endl;
    int index;
    cout << " Entre com um indice: ";
    cin >> index;
    try
    {
        // alterar o elemento usando operador []
        // c[index] = 10;
        cout << "O coeficiente do grau " << index << " vale: "
             << c[index] << endl;
    }
    catch (out_of_range &ex)
    {
        cout << ex.what() << " nao e possivel mostrar o coeficiente." << endl;
    }
}