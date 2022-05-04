#include <iostream>
#include "Cretangulo.h"
using namespace std;

// contrutor padrao
Cretangulo::Cretangulo() // funcao que inicializa as variaveis
{
    largura = 1;
    comprimento = 1;
    // cout << "criando objetos padroes\n";
}

// contrutor personalizado
Cretangulo::Cretangulo(int l, int c) // funcao que inicializa as variaveis com valores passados
{
    largura = l;
    comprimento = c;
    cout << "criando objetos personalizados\n";
}
//leitura 
void Cretangulo::leitura()
{
    int c, l ;
    cout << "digite um comprimento = ";
    cin >> c; 
    cout << "digite um largura = ";
    cin >> l;

    while (!is_valid(l ,c))
    {
        cout << "digite novamente um comprimento = ";
        cin >> c; 
        cout << "digite novamente um largura = ";
        cin >> l;
    }

    setLarg(l);
    setComp(c);
    
}

// busca os valores do objeto
int Cretangulo::getComp()
{
    return comprimento;
}
int Cretangulo::getLarg()
{
    return largura;
}

// mudar valor objeto
void Cretangulo::setComp(int c)
{
    if ((c >= 1) && (c <= 20))
        comprimento = c;
    else
        comprimento = 1;
}

void Cretangulo::setLarg(int l)
{
    if ((l >= 1) && (l <= 20))
        largura = l;
    else
        largura = 1;
}

// validacao dos atributos
bool Cretangulo::is_valid(int c, int l)
{
    return (c >= 1 && c <= 20 && l >= 1 && l <= 20);
}

// calculos
int Cretangulo::area()
{
    cout << largura * comprimento << "\n";
}

int Cretangulo::perimetro()
{
    return comprimento * 2 + largura * 2;
}

bool Cretangulo::isQuadrado()
{
    return (largura == comprimento);
}

void Cretangulo::imprime()
{
    cout << "largura: " << largura << "\ncomprimento: " << comprimento << "\n";
}

// imprime na ascii
void Cretangulo::imprime(char b, char p)
{
    int lin = largura;
    int col = comprimento;
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || j == 0 || i == lin - 1 || j == col - 1)
                cout << b;
            else
                cout << p;
        }
        cout << endl;
    }
}

Cretangulo::~Cretangulo()
{
    // cout << "destruindo objetos criados\n";
}
