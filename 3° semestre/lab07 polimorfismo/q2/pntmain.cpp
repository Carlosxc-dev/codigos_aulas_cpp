#include <iostream>
#include "pnt.h"
using namespace std;
#define PI 3.1415
#define MAXP 100000
int main()
{
    int qtd;
    cout << "Informe quantidade formas: ";
    cin >> qtd;
    cout << endl;
    if (qtd < 0 || qtd >= MAXP)
        qtd = 5;
    Ponto *vet[MAXP];
    cout << "Escolha " << qtd
         << " vezes qual o tipo que deseja criar" << endl;
    for (int j = 0; j < qtd; j++)
    {
        cout << endl;
        int op = menu();
        if (op == 0)
            return 0;
        switch (op)
        {
        case 1:
            vet[j] = new Ponto;
            cout << endl;
            cin >> *vet[j];
            break;
        case 2:
            vet[j] = new Circulo;
            cout << endl;
            cin >> *vet[j];
            break;
        case 3:
            vet[j] = new Cilindro;
            cout << endl;
            cin >> *vet[j];
            break;
        }
    }
    cout << endl  << "### MOSTRAR VETOR! ###" << endl << endl;
    for (int i = 0; i < qtd; i++)
        cout << *vet[i] << endl;
        cout << endl << "#### FIM ####" << endl << endl;
    // limpar memória.
    for (int i = 0; i < qtd; i++)
        delete vet[i]; // chama o destrutor que deve ser virtual.
    return 0;
}
