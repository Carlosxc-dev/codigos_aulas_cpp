#include <iostream>
#include <cmath>
#include "Complexo.h"
using namespace std;
// inicialização do membro estático
int Complexo::n = 0;
// função somar - recebe um complexo como parâmetro e retorna um complexo
Complexo Complexo::somar(Complexo _complexo)
{
    Complexo temp(getReal() + _complexo.getReal(),
                  getImaginario() + _complexo.getImaginario());
    return temp;
}
// função subtrair - recebe um complexo como parâmetro e retorna um complexo
Complexo Complexo::subtrair(Complexo _complexo)
{
    Complexo temp(getReal() - _complexo.getReal(),
                  getImaginario() - _complexo.getImaginario());
    return temp;
}
// função multiplicar - recebe um complexo como parâmetro e retorna um complexo
Complexo Complexo::multiplicar(Complexo _complexo)
{
    Complexo temp(
        getReal() * _complexo.getReal() - getImaginario() * _complexo.getImaginario(),
        getReal() * _complexo.getImaginario() + getImaginario() * _complexo.getReal());
    return temp;
}

// função dividir - recebe um complexo como parametro e retorna um complexo
Complexo
Complexo::dividir(Complexo _c)
{
    double a = (real * _c.real + imag * _c.imag) /
               (pow(_c.real, 2) + pow(_c.imag, 2));
    double b = (_c.real * imag - real * _c.imag) /
               (pow(_c.real, 2) + pow(_c.imag, 2));
    Complexo temp(a, b);
    return temp;
}
// função modulo - calcula o modulo do complexo
double Complexo::modulo()
{
    return sqrt(pow(getReal(), 2) + pow(getImaginario(), 2));
}
// função print - imprime um complexo com o formato desejado
void Complexo::print()
{
    cout << getReal() << " ";
    if (getImaginario() < 0)
        cout << getImaginario() << "i" << endl;
    else
        cout << "+" << getImaginario() << "i" << endl;
}
Complexo Complexo::operator+(Complexo _complexo)
{
    Complexo temp(getReal() + _complexo.getReal(),
                  getImaginario() + _complexo.getImaginario());
    return temp;
}
Complexo Complexo::operator-(Complexo _complexo)
{
    Complexo temp(getReal() - _complexo.getReal(),
                  getImaginario() - _complexo.getImaginario());
    return temp;
}
Complexo Complexo::operator*(Complexo _complexo)
{
    Complexo temp(getReal() * _complexo.getReal() -
                      getImaginario() * _complexo.getImaginario(),
                  getReal() * _complexo.getImaginario() + getImaginario() * _complexo.getReal());
    return temp;
}
Complexo Complexo::operator/(Complexo _complexo)
{
    double a = (getReal() * _complexo.getReal() +
                getImaginario() * _complexo.getImaginario()) /
               (pow(_complexo.getReal(), 2) +
                pow(_complexo.getImaginario(), 2));
    double b = (_complexo.getReal() * getImaginario() -
                getReal() * _complexo.getImaginario()) /
               (pow(_complexo.getReal(), 2) +
                pow(_complexo.getImaginario(), 2));
    Complexo temp(a, b);
    return temp;
}
bool Complexo::operator==(Complexo _complexo)
{
    return ((real == _complexo.real) && (imag == _complexo.imag));
}
bool Complexo::operator!=(Complexo _complexo)
{
    return !((*this) == _complexo);
}

ostream &operator<<(ostream &output, const Complexo &complexo)
{
    output << complexo.real << " ";
    if (complexo.imag < 0)
        output << complexo.imag << "i";
    else
        output << "+" << complexo.imag << "i";
    return output;
}
istream &operator>>(istream &input, Complexo &complexo)
{
    input >> complexo.real >> complexo.imag;
    return input;
}