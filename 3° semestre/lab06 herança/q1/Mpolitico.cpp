#include <string>
#include <iostream>
#include "politico.h"
using namespace std;
int main()
{
    cout << "## POLITICO COMPLETO ##" << endl<< endl;

    Prefeito p("Nome1", "P1", "1", "BRASIL", "MG", "Itajuba");
    cout << "*******************" << endl << endl;
    cout << "# Prefeito 01 #" << endl;
    p.imprime();

    Governador g("Nome2", "P2", "2", "Brasil", "QQuer");
    cout << endl << "# Governador 01 #" << endl;
    g.imprime(); cout << endl;

    Presidente pr("Nome3", "P3", "3", "Brasil");
    cout << endl << "# PRESIDENTE 01 #" << endl;
    pr.imprime(); cout << endl;
    
    Politico pi("Nome", "P4", "0");
    cout << endl << "# POLITICO 01 #" << endl;
    pi.imprime(); cout << endl;
    cout << "*******************" << endl << endl;
    return 0;
}