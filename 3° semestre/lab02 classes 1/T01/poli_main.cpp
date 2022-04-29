#include <iostream>
#include "poligonos.h"
using namespace std;

int main()
{
    Poligonos poli;
    int n, b;

    cout << "Enter with N and B: ";
    cin >> n >> b;
    poli.preenche(n, b);
    cout << "Nome = " << poli.Nome() << "\n";
    cout << "Area = " << poli.Area() << "\n";
    cout << "Perimetro = " << poli.Perimetro() << "\n";
}
