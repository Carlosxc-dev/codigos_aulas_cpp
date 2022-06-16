#include <iostream>
#include "q1.h"
#include <stdexcept> // EX1 - LAB8
using namespace std;

Polinomio::Polinomio()
{
    n = 2;
    valores = new double[n];
    valores[0] = 1;
    valores[1] = 1;
}
Polinomio::Polinomio(int _n)
{
    n = _n + 1;
    valores = new double[n];
    for (int i = 0; i < n; i++)
        valores[i] = 1;
}
// construtor de copia é necessário pois a classe usa ptr
Polinomio::Polinomio(const Polinomio &p)
{
    n = p.n;
    valores = new double[n];
    for (int i = 0; i < p.n; i++)
    {
        valores[i] = p.valores[i];
    }
}
Polinomio::~Polinomio()
{
    delete[] valores;
}
Polinomio Polinomio::operator=(const Polinomio &p)
{
    delete[] valores; // limpar o poonteiro antigo
    n = p.n;
    valores = new double[n]; // alocar para o novo tamanho
    for (int i = 0; i < p.n; i++)
    {
        valores[i] = p.valores[i]; // copiar valores
    }
    return *this;
}
Polinomio Polinomio::operator+(Polinomio _pol)
{
    Polinomio temp(max(_pol.n, n) - 1);
    int i;
    for (i = 0; i < min(_pol.n, n); i++)
        temp[i] = _pol.valores[i] + valores[i];
    if (_pol.n > n)
        for (int j = i; j < _pol.n; j++)
            temp[j] = _pol.valores[j];
    else
        for (int j = i; j < n; j++)
            temp[j] = valores[j];
    return temp;
}
Polinomio Polinomio::operator-(Polinomio _pol)
{
    Polinomio temp(max(_pol.n, n) - 1);
    int i;
    for (i = 0; i < min(_pol.n, n); i++)
        temp[i] = valores[i] - _pol.valores[i];
    if (_pol.n > n)
        for (int j = i; j < _pol.n; j++)
            temp[j] = -_pol.valores[j];
    else
        for (int j = i; j < n; j++)
            temp[j] = valores[j];
    return temp;
}
istream &operator>>(istream &input, Polinomio &_pol)
{
    cout << "Polinomio: C0 + C1x1 + C2x2 + ... + Cnxn = 0" << endl;
    for (int i = 0; i < _pol.n; i++)
    {
        cout << "Digite o valor de C" << i << ": ";
        input >> _pol[i];
    }
    return input;
}
ostream &operator<<(ostream &output, Polinomio &_pol)
{
    for (int i = 0; i < _pol.n; i++)
    {
        if (i != _pol.n - 1)
            output << _pol[i] << "x^" << i << ((_pol[i + 1] >= 0) ? " + " : " ");
        else
            output << _pol[i] << "x^" << i << " = 0";
    }
    return output;
}
// alterada para EX1 - LAB8
double &Polinomio::operator[](int pos)
{
    if (pos >= 0 && pos < n)
        return valores[pos];
    else
        throw out_of_range("Indice Invalido!!"); // return valores[0];
}
