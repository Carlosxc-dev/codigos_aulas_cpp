#include <iostream>
#include <cstdlib>

using namespace std;

// declara que função será template
template <typename T>
void print_vector(T *v, int sz)
{
	for(int i = 0; i < sz; i++)
		cout << v[i] << " ";
}

// A, assim como T na função anterior, representa qualquer 
// tipo de dados que se queira utilizar
template <typename A>
void sort_vector(A vetor[], int tam)
{
    A aux;
    for(int i = 0; i < tam; i++)
        for(int j = 0; j < tam - 1 - i; j++)
            if (vetor[j+1] < vetor[j])
            {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
}

template <typename T>
void imprime_e_ordena( T * vf, int tam)
{
	// Chamando afunções print_vector e sort_vector < T >
	
	for(int i = 0; i < tam; i++)
		vf[i] = (T)(rand() % 100)/100.0;

	cout << "Vetor de float desordenado: ";
	print_vector(vf, tam);
	cout << endl;
	sort_vector(vf, tam);
	cout << "Vetor de float ordenado: ";
	print_vector(vf, tam);
	cout << endl;
}

int main()
{
	// Chamando as funções print_vector e sort_vector <float>
	float vf[10];
	for(int i = 0; i < 10; i++)
		vf[i] = (float)(rand() % 100)/100.0;

	cout << "Vetor de float desordenado: ";
	print_vector(vf, 10);
	cout << endl;
	sort_vector(vf, 10);
	cout << "Vetor de float ordenado: ";
	print_vector(vf, 10);
	cout << endl;

	// Chamando as funções print_vector e sort_vector <int>
	int vi[10];
	for(int i = 0; i < 10; i++)
		vi[i] = rand() % 100;

	cout << "Vetor de int desordenado: ";
	print_vector(vi, 10);
	cout << endl;
	sort_vector(vi, 10);
	cout << "Vetor de int ordenado: ";
	print_vector(vi, 10);
	cout << endl;
	
	double d[20];
	imprime_e_ordena(d,20);
	char c[100];
	imprime_e_ordena(c,100);
	
}

