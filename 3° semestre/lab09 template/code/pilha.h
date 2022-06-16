#ifndef PILHA_H
#define PILHA_H
#include<iostream>
using namespace std;

template <typename T, int elementos>
class Pilha { //...
	private:
		int tamanho;
		int topo;
		T pilha[elementos];
	public:
		Pilha(int = 10);
		
		~Pilha() {
			delete[] pilha;
		}

		// insere no topo, retira do topo
		bool push(T&);
		bool pop(T&);

		// Não precisam de template<> pois estão 
		// dentro da definição do template da classe
		// está vazia?
		bool is_empty() {
			if(topo == -1) return true;
			return false;
		}

		// está cheia?
		bool is_full() {
			if(topo == tamanho-1) return true;
			return false;
		}
		
		friend ostream& operator << ( ostream& , const Pilha <T>& );
};

#endif

template  <typename T>
ostream& operator << ( ostream& o, const Pilha <T>& p )
{
	for (int i = 0; i< p.tamanho; i++)
		o << p.pilha[i] << " ";
	return o;
}

// as funções definidas fora da classe precisam
// também ser funções template, com escopo Pilha<T>
template <typename T>
Pilha<T>::Pilha(int sz)
	: tamanho{sz > 0 ? sz : 10}, topo{-1}
{
	pilha = new T[tamanho];
}

template <typename T>
bool Pilha<T>::push(T &valor) {
	if(!is_full())
	{
		topo++;
		pilha[topo] = valor;
		return true;
	}
	return false;
}

template <typename T>
bool Pilha<T>::pop(T &valor) {
	if(!is_empty())
	{
		valor = pilha[topo];
		topo--;
		return true;
	}
	return false;
}