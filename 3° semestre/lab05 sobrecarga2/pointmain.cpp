#include <iostream>
#include "point.h"
#include <cmath>
using namespace std;

int main()
{
    Point p1{10, 10};
    Point p2{10, 10};
    cout << p1 << " e " << p2;
    cout << " sao " << (p1 == p2 ? "iguais" : "diferentes");
    cout << "\n";
    Point p3{10, 11};
    if (p1 != p3)
        cout << p1 << " e " << p3 << " sao diferentes.\n";
    cout << "Ponto 1: " << p1 << "\n";
    cout << "Entre com os valores de p2 (x e y): ";
    cin >> p2;
    cout << "Ponto 2: " << p2 << "\n";
    // Para realizar a conversão, utilize o operador
    // de cast, como já estamos acostumados
    cout << "Modulo de " << p2 << ": " << (int)p2 << "\n";
    int x = (int)p2; // necessário tornar explícito
    cout << "Valor de x = " << x << "\n";
}
