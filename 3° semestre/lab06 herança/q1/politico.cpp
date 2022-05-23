#include <string>
#include <iostream>
#include "politico.h"
using namespace std;
void Politico::imprime()
{
    cout << "Numero: " << numero << endl;
    cout << "Nome: " << nome << endl;
    cout << "Partido: " << partido << endl;
}
void Presidente::imprime()
{
    Politico::imprime();
    cout << "Pais: " << pais << endl;
}
void Governador::imprime()
{
    Presidente::imprime();
    cout << "Estado: " << estado << endl;
}
void Prefeito::imprime()
{
    Governador::imprime();
    cout << "Cidade: " << cidade << endl
         << endl;
}