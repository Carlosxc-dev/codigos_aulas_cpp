#include <iostream>
#include "poli.h"
#include "math.h"
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
    delete[] valores; // limpar o ponteiro antigo
    n = p.n;
    valores = new double[n]; // alocar para o novo tamanho
    for (int i = 0; i < p.n; i++)
    {
        valores[i] = p.valores[i]; // copiar valores
    }
}
Polinomio Polinomio::operator+(Polinomio _pol)
{
    Polinomio temp(max(_pol.n, n) - 1);
    int i;
    for (i = 0; i < min(_pol.n, n); i++)
        temp[i] = _pol.valores[i] + valores[i];
    if (_pol.n > n)
        for (int j = i; j < _pol.n; j++)
            temp[i] = _pol.valores[i];
    else
        for (int j = i; j < n; j++)
            temp[i] = valores[i];
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
            temp[i] = -_pol.valores[i];
    else
        for (int j = i; j < n; j++)
            temp[i] = valores[i];
    return temp;
}
istream &operator>>(istream &input, Polinomio &_pol)
{
    cout << "Polinomio: C0 + C1x^1 + C2x^2 + ... + Cnx^n = 0" << endl;
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
            output << _pol[i] << "x^" << i << " + ";
        else
            output << _pol[i] << "x^" << i << " = 0";
    }
    return output;
}
double &Polinomio::operator[](int pos)
{
    if (pos >= 0 && pos < n)
        return valores[pos];
    else
        return valores[0]; // alterar para lançar exceção
}
Polinomio Polinomio::derivada()
{
    Polinomio tmp(n - 1 - 1);
    for (int i = 1; i < n; i++)
    {
        tmp.valores[i - 1] = i * valores[i];
    }
    return tmp;
}
double Polinomio::raiz(int n_inicial, int num_iteracoes)
{
    Polinomio inicio = (*this); // cria uma cópia local
    Polinomio derivada_inicio;  // cria polinomio para ser a derivada
    derivada_inicio = inicio.derivada();
    double root;
    for (int i = 0; i < num_iteracoes; i++)
    {
        root = n_inicial - inicio.calcula(n_inicial) /
                               derivada_inicio.calcula(n_inicial);
        n_inicial = root;
    }
    return root;
}
double Polinomio::calcula(double x)
{
    double resp = 0;
    for (int i = 0; i < n; i++)
    {
        resp += valores[i] * pow(x, i);
    }
    return resp;
}
