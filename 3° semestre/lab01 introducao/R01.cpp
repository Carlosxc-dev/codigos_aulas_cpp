#include <iostream>

using namespace std;

int fat(int n)
{
    return (n < 2) ? n : n * fat( n - 1);
}

int main(int argc, char const *argv[])
{
    int num = 0;

    cout << "digite um numero para o fatorial: ";

    cin >> num;    

    cout << "fatorial de " << num << " e " << fat(num);


    return 0;
}

