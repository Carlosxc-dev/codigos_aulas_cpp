#include <iostream>
#include "Cretangulo.h"

using namespace std;

int main()
{
    // Cretangulo ret;
    Cretangulo vetor[5];
    Cretangulo *ret4 = new Cretangulo;

    ret4->leitura();
    ret4->imprime();

    delete ret4;

    cout << "\n\nleitura dos objetos\n";
    for(int i = 0; i < 4; i++)
    {
        vetor[i].leitura();
    }

    cout << "\n\nimpressao dos objetos\n\n";
    for (int i = 0; i < 4; i++)
    {
        vetor[i].imprime();
    }

    // ret.leitura();
    // ret.area();





    return 0;
}