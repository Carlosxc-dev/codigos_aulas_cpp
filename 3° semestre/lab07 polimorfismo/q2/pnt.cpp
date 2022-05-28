#include <iostream>
#include "pnt.h"
using namespace std;
istream &operator>>(istream &input, Ponto &in)
{
    in.read();
    return input;
}
ostream &operator<<(ostream &output, const Ponto &out)
{
    out.print();
    return output;
}
int menu()
{
    int op;
    cout << "1 – Ponto " << endl;
    cout << "2 – Circulo " << endl;
    cout << "3 - Cilindro" << endl;
    cout << "0 – Sair " << endl;
    cout << "Digite opcao desejada para inserir: ";
    while (cin >> op)
    {
        if (op == 0 || op == 1 || op == 2 || op == 3)
            return op;
        cout << "Digite uma das opcoes disponiveis" << endl;
    }
}
