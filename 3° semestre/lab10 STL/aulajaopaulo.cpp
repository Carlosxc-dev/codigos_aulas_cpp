#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    list<string> nomes;
    list<string>::iterator it;

    nomes.push_back("felipe");
    nomes.push_back("carlos");
    nomes.push_back("henrique");

    it = nomes.begin();
    nomes.insert(it, "joseph");
    nomes.remove("carlos");

    for ( it = nomes.begin(); it != nomes.end(); it++)
        cout << *it << " ";

    return 0;
}



 
