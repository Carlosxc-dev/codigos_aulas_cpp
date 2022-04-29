#include <iostream>

using namespace std;

int calcPrimo(){

    int count = 0;
    int i = 0;

    while (count <= 20)
    {
        i++;
        if (((i % 2 != 0)||(i == 1))&&(i % 5 != 0))
        {
            cout << " " << i;
            count++;
        }
    }
}

int main(int argc, char const *argv[])
{
    cout << "os 20 numeros primos sao: \n";
    
    calcPrimo();

    return 0;
}
