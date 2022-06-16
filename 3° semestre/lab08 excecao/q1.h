#ifndef POLINOMIO_H
#define POLINOMIO_H
#include <iostream>
using namespace std;
class Polinomio
{
private:
    double *valores;
    int n;

public:
    Polinomio();
    Polinomio(int);
    Polinomio(const Polinomio &);
    virtual ~Polinomio();
    Polinomio operator=(const Polinomio &);
    Polinomio operator+(Polinomio);
    Polinomio operator-(Polinomio);
    double &operator[](int); // lança uma exceção out_of_range
    friend ostream &operator<<(ostream &, Polinomio &);
    friend istream &operator>>(istream &, Polinomio &);
};
#endif
