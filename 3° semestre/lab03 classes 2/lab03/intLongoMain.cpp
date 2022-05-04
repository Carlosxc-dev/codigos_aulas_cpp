#include <iostream>
#include "intLongo.h"
using namespace std;


int main(int argc, char const *argv[])
{
    BigInt a;
    BigInt b;
    BigInt aux;

    a.leia();
    b.leia();
    aux = a.soma(b);
    cout << "soma = "; 
    aux.print();
    aux = a.subtrai(b);
    cout << "subtrcao = ";
    aux.print();

    return 0;
}

