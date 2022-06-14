#include <iostream>
using namespace std; 
#ifndef prova
#define prova

class ProvaBimestral
{
private:
    string nome, diciplina;
    int matricula;
    float notas[10];

    void incio(){
        for(int i = 0; i < 10; i++)
        {
            notas[i] = 0;
        }
    }
    
public:

    ProvaBimestral(string n, string dicip, int mat, float nota[10])
    {
        nome = n;
        diciplina = dicip;
        matricula = mat;
        void inicio();
        for (int i = 0; i < 10; i++)
        {
            notas[i] = nota[i];
        }
    };
    ~ProvaBimestral(){};

    float soma();
    bool operator>(const ProvaBimestral&);
    friend ostream &operator<<(ProvaBimestral&, const ProvaBimestral &);
    friend istream &operator>>(ProvaBimestral&, ProvaBimestral &);
};
#endif

