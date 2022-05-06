#ifndef triangulo
#define triangulo

class Triangulo
{
private:
    int a, b, c;

    bool is_triangulo(int a, int b, int c){
        if (a + b > c)
        {
            return true;
        }
        
        return false;
    }

public:
    Triangulo(int , int , int);
    ~Triangulo(){};

    void todos100();
};



#endif