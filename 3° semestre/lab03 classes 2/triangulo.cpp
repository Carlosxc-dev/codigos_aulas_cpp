#include "triangulo.h"
#include <iostream>
#include <cmath>
using namespace std;

Triangulo::Triangulo(int x, int y, int z)
    {
        if(is_triangulo(x, y, z))
        {
            a = x;
            b = y;
            c = z;
        }
        else
        {
            cout << "\nnao e triangulo valor padroa a= 2, b=3,c=4\n";
            a = 2;
            b = 3;
            c = 4;
        }
    };

void Triangulo::todos100()
{
    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; j <= 100; j++)
        {
            for (int k = 1; k <= 100; k++)
            {
                if (i == sqrt(j * j + k * k))
                {
                    cout << i << " " << j << " " << k << "\n";
                }
            }
        }
    }
}
