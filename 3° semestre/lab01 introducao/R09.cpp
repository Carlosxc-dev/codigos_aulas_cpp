#include <iostream>
using namespace std;

bool palindromo(int num)
{
    int vetor[7], x = 1, count = 0;

    for (int i = 0; i < 7; i++)
    {
        vetor[i] = (num / x) % 10;
        x *= 10;
    }

    for (int i = 0; i < 3; i++)
    {
        if (vetor[i] == vetor[6 - i])
        {
            count++;
        }
    }

    if (count == 3)
    {
        cout << num << " ===> E palindromo";
    }
    else
    {
        cout << num << " ===> NAO e palindromo";
    }
}

int main(int argc, char const *argv[])
{
    int aux, stop = 1;

    while (stop)
    {
        cout << "escreva um inteiro de 7 digitos: ";
        cin >> aux;

        if ((aux >= 1000000) && (aux <= 9999999))
        {
            stop = 0;
            palindromo(aux);
        }
    }

    return 0;
}
