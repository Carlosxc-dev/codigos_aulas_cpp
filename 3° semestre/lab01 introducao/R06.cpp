#include <iostream>
using namespace std;

int soma(int n)
{
    return (n < 1) ? n : n + soma( n - 1);
}

int main(int argc, char const *argv[])
{
    int num;
    int aux = 0;

    cout << "quantos numeros: ";
    cin >> num;

    cout << "soma = " << soma(num);

    return 0;
}
