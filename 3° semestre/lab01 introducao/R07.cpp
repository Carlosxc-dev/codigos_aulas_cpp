#include <iostream>
using namespace std;

int mdc(int x, int y)
{
    return y ? mdc(y, x%y) : abs(x); 
}

int main(int argc, char const *argv[])
{
    int x , y;

    cout << "digite x: ";
    cin >> x;
    cout << "digite y: ";
    cin >> y;
    
    cout << "mdc = " << mdc(x, y);

    return 0;
}
