#include <iostream>
using namespace std;

int decimal(int num)
{
    int u,d,c,m, decimal=0;

    u = (num/1)%10;
    d = (num/10)%10;
    c = (num/100)%10;
    m = (num/1000)%10;

    decimal = (u*1)+(d*2)+(c*4)+(m*8);

    return decimal;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "escreva o numero: ";
    cin >> n;
    
    cout  << "o numero decimal e = " << decimal(n);

    return 0;
}
