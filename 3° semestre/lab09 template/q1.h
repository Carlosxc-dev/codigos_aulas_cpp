#ifndef CVETOR_H
#define CVETOR_H
#include <iostream>
using namespace std;
template <typename T>
class CVetor
{
private:
    T *m_v;
    int m_tamanho;

public:
    CVetor();
    CVetor(int);
    virtual ~CVetor() { delete[] m_v; }
    CVetor(const CVetor<T> &other);
    CVetor &operator=(const CVetor &other);
    T &operator[](int i);
    void ordena();
    friend ostream &operator<<(ostream &output, const CVetor<T> &vet)
    {
        for (int i = 0; i < vet.m_tamanho; i++)
        {
            output << vet.m_v[i] << " ";
        }
        return output;
    }
    friend istream &operator>>(istream &input, CVetor<T> &vet)
    {
        cout << "Digite " << vet.m_tamanho << " valores: ";
        for (int i = 0; i < vet.m_tamanho; i++)
        {
            input >> vet.m_v[i];
        }
        cout << endl;
        return input;
    }
};
template <typename T>
void CVetor<T>::ordena()
{
    T aux;
    for (int i = 0; i < m_tamanho; i++)
    {
        for (int j = 0; j < m_tamanho - 1 - i; j++)
        {
            if (m_v[j] > m_v[j + 1]) // precisa do operador >
            {
                aux = m_v[j]; // precisa do operador =
                m_v[j] = m_v[j + 1];
                m_v[j + 1] = aux;
            }
        }
    }
}
template <typename T>
T &CVetor<T>::operator[](int i)
{
    if (i >= 0 && i < m_tamanho)
    {
        return m_v[i];
    }
    else
    {
        throw out_of_range("Indice fora da faixa!");
    }
}
template <typename T>
CVetor<T>::CVetor(int tamanho)
{
    m_v = new T[tamanho];
    m_tamanho = tamanho;
    for (int i = 0; i < tamanho; i++)
    {
        m_v[i] = 0;
    }
}
template <typename T>
CVetor<T>::CVetor(const CVetor &vet)
{
    m_tamanho = vet.m_tamanho;
    m_v = new T[m_tamanho];
    for (int i = 0; i < m_tamanho; i++)
    {
        m_v[i] = vet.m_v[i];
    }
}
template <typename T>
CVetor<T>::CVetor()
{
    m_tamanho = 10;
    m_v = new T[10];
    for (int i = 0; i < 10; i++)
    {
        m_v[i] = 0;
    }
}
// operador de atribuiçao
template <typename T>
CVetor<T> &CVetor<T>::operator=(const CVetor<T> &p)
{
    delete[] m_v; // remover ponteiro antigo
    m_tamanho = p.m_tamanho;
    m_v = new T[m_tamanho];
    for (int i = 0; i < p.m_tamanho; i++)
    {
        m_v[i] = p.m_v[i];
    }
    return *this;
}
#endif // CVETOR_H