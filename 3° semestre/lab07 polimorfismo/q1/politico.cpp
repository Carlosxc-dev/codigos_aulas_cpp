#include <string>
#include <iostream>
#include "politico.h"
using namespace std;
ostream &operator<<(ostream &out, Politico &p)
{
    p.imprime();
    return out;
}
istream &operator>>(istream &in, Politico &p)
{
    p.read();
    return in;
}
void Politico::imprime()
{
    cout << "Numero: " << numero << endl;
    cout << "Nome: " << nome << endl;
    cout << "Partido: " << partido << endl;
}
void Politico::read()
{
    cout << "Digite o nome: ";
    // getline(cin, nome);
    cin >> nome;
    cout << "Digite o partido: ";
    // getline(cin, partido);
    cin >> partido;
    cout << "Digite numero do candidato: ";
    cin >> numero;
}
void Presidente::imprime()
{
    Politico::imprime();
    cout << "Pais: " << pais << endl;
}
void Presidente::read()
{
    Politico::read();
    cout << "Digite o pais: ";
    cin >> pais;
}
void Governador::imprime()
{
    Presidente::imprime();
    cout << "Estado: " << estado << endl;
}
void Governador::read()
{
    Presidente::read();
    cout << "Digite o estado: ";
    cin >> estado;
}
void Prefeito::imprime()
{
    Governador::imprime();
    cout << "Cidade: " << cidade << endl
         << endl;
}
void Prefeito::read()
{
    Governador::read();
    cout << "Digite a cidade: ";
    cin >> cidade;
}
    // função de apoio das classes
    int
    menu()
{
    int op;
    cout << "1 - Presidente" << endl;
    cout << "2 - Governador" << endl;
    cout << "3 – Prefeito " << endl;
    cout << "0 – Sair " << endl;
    cout << "Digite opcao desejada para inserir: ";
    while (cin >> op)
    {
        if (op == 0 || op == 1 || op == 2 || op == 3)
            return op;
        cout << "Digite uma das opcoes disponiveis" << endl;
    }
}