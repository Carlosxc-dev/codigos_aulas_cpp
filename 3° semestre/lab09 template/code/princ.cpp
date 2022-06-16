#include "pilha.h"
//#include "heranca.h"
#include <iostream>

using namespace std;

int main()
{
	// criando uma pilha de inteiros com 50 posições (máx.)
	Pilha<float> p{50};
	float v = 0;
	
	cout << "inserindo itens: (-1 para terminar)\n";	
	while(v != -1)
	{
		cin >> v;
		if(v != -1)
			p.push(v);
	}

	cout << "Retirando itens... ";
	while(!(p.is_empty()))
	{
		p.pop(v);
		cout << v << " ";
	}
}