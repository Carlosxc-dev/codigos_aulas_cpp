#include <iostream>
using namespace std;

bool palindromo(int num)
{
    int vetor[7], aux , x = 1 , vet2[7], j=6, count=0;

    for (int i = 0; i < 7; i++)
    {
        vetor[i] = (num/x)%10;
        x *= 10;
        cout << vetor[i];
    }

    
    if (count == 7)
    {
        cout << "e palindromo";
    }
    else
    {
        cout << " nao e palindromo";
    }
    

}

int main(int argc, char const *argv[])
{
    int num, aux, stop = 1;

    while (stop)
    {
        cout << "escreva um inteiro de 7 digitos: ";
        cin >> aux;

        if ((aux >= 1000000)&&(aux <= 1999999))
        {
            stop = 0;
            palindromo(num);
        }
        
    }
    
    
    return 0;
}
