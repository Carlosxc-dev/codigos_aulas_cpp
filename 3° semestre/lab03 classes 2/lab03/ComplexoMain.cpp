#include <iostream>
#include <cmath>
#include "Complexo.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Complexo a(1, 2);
    Complexo b(3, 4);
    // Complexo c(b);
    Complexo aux;

    // c.print();

    cout << "A: ";
    a.print();

    cout << "B: ";
    b.print();

    cout << "A + B: ";
    aux = a.somar(b);
    aux.print();

    cout << "A - B: ";
    aux = a.subtrair(b);
    aux.print();

    cout << "A * B: ";
    aux = a.multiplicar(b);
    aux.print();

    cout << "A / B: ";
    aux = a.dividir(b);
    aux.print();

    cout << "|A|: " << a.modulo() << endl;
    cout << "|B|: " << b.modulo() << endl;
    cout << "Qt de objetos: " << a.getObjetos() << endl;

    return 0;
}
