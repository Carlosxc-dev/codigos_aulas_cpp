#include <string>
using namespace std;
#ifndef POLIGONOS_H
#define POLIGONOS_H
class Poligonos
{
private:
    int n, b;

public:
    Poligonos(int n = 1, int b = 1);
    ~Poligonos() {}
    float Area();
    float Perimetro();
    void preenche(int x, int y);
    string Nome();
};
#endif