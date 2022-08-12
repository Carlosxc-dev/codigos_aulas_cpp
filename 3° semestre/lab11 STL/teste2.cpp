#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    multimap<int, string> arvore;
    multimap<int, string>::iterator it;
    pair<int, string> par{9876, "maria"};

    arvore.insert(make_pair(1234, "joao"));
    arvore.insert(pair<int, string>{5678, "carlos"});
    arvore.insert(par);
    arvore.insert(make_pair(1234, "carina"));
    arvore.insert(make_pair(23456, "adriana"));
    arvore.erase(5678);

    cout << "quantidade de elementos: " << arvore.size() << "\n";
    cout << "elementos \n";

    for (it = arvore.begin(); it != arvore.end(); ++it){
        cout << it->first << " - " << it->second << "\n"; 
    }
    cout << "\n";

    //multiset aceita elementos de mesmo valor 
    
    

    return 0;
}
