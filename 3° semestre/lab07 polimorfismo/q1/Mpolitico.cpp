#include <string>
#include <iostream>
#include "politico.h"
using namespace std;
#define MAXP 100000
int main()
{
    int qtd;
    cout << "Informe quantidade politicos: ";
    cin >> qtd;
    cout << endl;
    if (qtd < 0 || qtd >= MAXP)
        qtd = 5; // limita em 5 caso usuário erre na quantidade
    Politico *vet[qtd];
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
            vet[j] = new Presidente;
            cout << endl;
            cin >> *vet[j];
            break;
        case 2:
            vet[j] = new Governador;
            cout << endl;
            cin >> *vet[j];
            break;
        case 3:
            vet[j] = new Prefeito;
            cout << endl;
            cin >> *vet[j];
            break;
        }
    }
    cout << endl << "### MOSTRAR VETOR! ###" << endl << endl;
    for (int i = 0; i < qtd; i++)
        cout << *vet[i] << endl; 
        cout << endl << "#### FIM ####" << endl << endl;
    // limpar memória.
    for (int i = 0; i < qtd; i++)
        delete vet[i]; // chama o destrutor que deve ser virtual.
    return 0;
}
