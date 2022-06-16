#include "q4.h"
#include <stdexcept>
using namespace std;
ostream &operator<<(ostream &out, const CPilha &p)
{
    for (int i = 0; i <= p.m_ponteirodaPilha; i++)
        out << p.m_dados[i] << " ";
    return out;
}
istream &operator>>(istream &in, CPilha &p)
{
    int a;
    p.m_ponteirodaPilha = -1; // esvaziar a pilha
    cout << "Entre com os dados da pilha: ";
    try
    {
        for (int i = 0; i < p.m_tamanho; i++)
        {
            in >> a;
            p.push(a);
        }
    }
    catch (runtime_error &rt)
    {
        cout << rt.what() << endl;
    }
    return in;
}

// construtor com parâmetros
CPilha::CPilha(int memoria)
{
    m_ponteirodaPilha = -1; // sinaliza pilha vazia
    m_tamanho = (memoria > 0) ? memoria : 10;
    m_dados = new int[m_tamanho];
}
// destrutor
CPilha::~CPilha(void)
{
    delete[] m_dados;
}
// puxar dados da pilha
int CPilha::pop(int &pop_to)
{
    if (m_ponteirodaPilha == -1)
        throw runtime_error("Pilha esta vazia!!!");
    pop_to = m_dados[m_ponteirodaPilha--];
    return pop_to;
}
// empurrar dados para a pilha
int CPilha::push(int push_this)
{
    if (m_ponteirodaPilha == m_tamanho - 1)
        throw runtime_error("Pilha cheia!!");
    m_dados[++m_ponteirodaPilha] = push_this;
    return push_this;
}

// construtor de cópia
CPilha::CPilha(const CPilha
                   &p)
{
    m_ponteirodaPilha = p.m_ponteirodaPilha;
    m_tamanho = p.m_tamanho;
    m_dados = new int[m_tamanho];
    for (int i =
             0;
         i <= m_ponteirodaPilha; i++)
        m_dados[i] = p.m_dados[i];
}
// operador de atribuição
CPilha
    &
    CPilha::operator=(const CPilha
                          &p)
{
    delete[] m_dados;
    m_ponteirodaPilha = p.m_ponteirodaPilha;
    m_tamanho = p.m_tamanho;
    m_dados = new int[m_tamanho];
    for (int i =
             0;
         i <= m_ponteirodaPilha; i++)
        m_dados[i] = p.m_dados[i];
    return *this;
}