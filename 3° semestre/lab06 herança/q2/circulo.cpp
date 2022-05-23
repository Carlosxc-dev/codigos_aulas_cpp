#include <iostream>
#include "circulo.h"
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