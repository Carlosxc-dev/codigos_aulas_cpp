#include <iostream>
#include "poligonos.h"
#include <cmath>
#define PI 3.141592
using namespace std;

void Poligonos::preenche(int x, int y)
{
    this->n = x;
    this->b = y;
}
Poligonos::Poligonos(int n, int b)
{
    this->n = n;
    this->b = b;
}
float Poligonos::Area()
{
    return (0.25) * n * b * b * (cos(PI / n) / sin(PI / n));
}
float Poligonos::Perimetro()
{
    return n * b;
}
string Poligonos::Nome()
{
    switch (n)
    {
    case 10:
        return "Decagono";
    case 9:
        return "Eneagono";
    case 8:
        return "Octogono";
    case 7:
        return "Heptagono";
    case 6:
        return "Hexagono";
    case 5:
        return "Pentagono";
    case 4:
        return "Quadrado";
    case 3:
        return "Triangulo";
    default:
        return "Nao Reconhecido";
    }
}