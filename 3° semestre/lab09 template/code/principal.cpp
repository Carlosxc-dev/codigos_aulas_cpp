#include "par.h"
#include <iostream>

using namespace std;

int main()
{
	Par<int, float> p1{1000, 5.6};
	cout << "p1 = ";
	p1.imprime();
	cout << "\n";
}