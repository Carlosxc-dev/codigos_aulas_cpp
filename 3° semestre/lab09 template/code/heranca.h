#include "pilha.h"

template <class T>
class PilhaDouble : public Pilha<double>
{
	private:
		T dado;
		double soma_itens;
	public:
		PilhaDouble() {}
		~PilhaDouble() {}
};