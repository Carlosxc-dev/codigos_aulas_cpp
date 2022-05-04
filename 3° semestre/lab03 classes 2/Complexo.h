#ifndef COMPLEXO
#define COMPLEXO

class Complexo
{
private:
    double real, imaginario;
    static int count;

public:
    Complexo()
    {
        real = 2;
        imaginario = 5;
        count++;
    };

    Complexo(double r, double i)
    {
        real = r;
        imaginario = i;
        count++;
    };

    Complexo(const Complexo &c)
    {
        real = c.real;
        imaginario = c.imaginario;
        count++;
    }

    ~Complexo() { count--; };

    double getReal() { return real; };
    double getImaginario() { return imaginario; };
    double setReal(double r) { real = r; };
    double setImaginario(double i) { imaginario = i; };

    Complexo somar(Complexo);
    Complexo subtrair(Complexo);
    Complexo multiplicar(Complexo);
    Complexo dividir(Complexo);

    int getObjetos() { return count; }
    double modulo();
    void print();
};

#endif