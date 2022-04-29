
#ifndef Cretangulo_H
#define Cretangulo_H

class Cretangulo
{
private:
    int largura, comprimento;

public:
    Cretangulo();
    Cretangulo(int l, int c);
    ~Cretangulo();
    int getLarg();
    int getComp();
    void setLarg(int l);
    void setComp(int c);
    bool is_valid(int c, int l);
    int area();
    int perimetro();
    bool isQuadrado();
    void imprime(char b, char p);
    void leitura();
    void imprime();
};

#endif