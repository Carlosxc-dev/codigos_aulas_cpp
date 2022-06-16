#ifndef PILHA_H
#define PILHA_H
#include <iostream>
using namespace std;
template <typename T>
class CPilha
{
private:
    T *m_dados;            // ponteiro para dados da pilha
    int m_ponteirodaPilha; // apontador do topo da pilha
    int m_tamanho;         // espaço de memória reservado para o objeto
public:
    CPilha(int memoria);               // construtor com parâmetros
    CPilha(void);                      // construtor sem parâmetros
    ~CPilha(void);                     // destrutor
    bool pop(T &pop_to);               // puxar dados da pilha
    bool push(T push_this);            // empurrar dados para a pilha
    CPilha(const CPilha &);            // construtor de cópia
    CPilha &operator=(const CPilha &); // operador de atribuição
    template <typename T1>
    friend ostream &operator<<(ostream &, const CPilha<T1> &);
    template <typename T1>
    friend istream &operator>>(istream &, CPilha<T1> &);
};
#endif
// implementação de templates direto com a definição
template <typename T>
ostream &operator<<(ostream &out, const CPilha<T> &p)
{
    for (int i = 0; i <= p.m_ponteirodaPilha; i++)
        out << p.m_dados[i] << " ";
    out << endl;
    return out;
}
template <typename T>
istream &operator>>(istream &in, CPilha<T> &p)
{
    T a;
    p.m_ponteirodaPilha = -1; // esvaziar a pilha
    cout << "Entre com os " << p.m_tamanho << " dados da pilha: ";
    for (int i = 0; i < p.m_tamanho; i++)
    {
        in >> a;
        if (!p.push(a))
            break; // se não conseguiu inserir aborta.
    }
    return in;
}
// construtor com parâmetros
template <typename T>
CPilha<T>::CPilha(int memoria)
{
    m_ponteirodaPilha = -1; // sinaliza pilha vazia
    m_tamanho = (memoria > 0) ? memoria : 10;
    m_dados = new T[m_tamanho];
}

// construtor sem parâmetros
template <typename T>
CPilha<T>::CPilha(void)
{
    m_ponteirodaPilha = -1; // sinaliza pilha vazia
    m_tamanho = 10;
    m_dados = new T[m_tamanho];
}
// destrutor
template <typename T>
CPilha<T>::~CPilha(void)
{
    delete[] m_dados;
}
// puxar dados da pilha
template <typename T>
bool CPilha<T>::pop(T &pop_to)
{
    if (m_ponteirodaPilha == -1)
        return false;
    pop_to = m_dados[m_ponteirodaPilha--];
    return true;
}
// empurrar dados para a pilha
template <typename T>
bool CPilha<T>::push(T push_this) // melhor seria const T&
{
    if (m_ponteirodaPilha == m_tamanho - 1)
        return false;
    m_dados[++m_ponteirodaPilha] = push_this;
    return true;
}

// construtor de cópia
template <typename T>
CPilha<T>::CPilha(const CPilha<T> &p)
{
    m_ponteirodaPilha = p.m_ponteirodaPilha;
    m_tamanho = p.m_tamanho;
    m_dados = new T[m_tamanho];
    for (int i = 0; i <= m_ponteirodaPilha; i++)
        m_dados[i] = p.m_dados[i];
}
// operador de atribuição
template <typename T>
CPilha<T> &CPilha<T>::operator=(const CPilha<T> &p)
{
    delete[] m_dados;
    m_ponteirodaPilha = p.m_ponteirodaPilha;
    m_tamanho = p.m_tamanho;
    m_dados = new T[m_tamanho];
    for (int i = 0; i <= m_ponteirodaPilha; i++)
        m_dados[i] = p.m_dados[i];
    return *this;
}