#include <iostream>
#include "provaBimestral.h"
using namespace std;

float ProvaBimestral::soma()
{
    float total = 0;

    for (int i = 0; i < 10; i++)
    {
        total += notas[i];
    }
    return total;
}

bool ProvaBimestral::operator>(const ProvaBimestral &b)
{
    
}

ostream &operator<<(ostream &output, const ProvaBimestral &fracao)
{
}
istream &operator>>(istream &input, ProvaBimestral &fracao)
{
}