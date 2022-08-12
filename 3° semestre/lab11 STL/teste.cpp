#include <iostream>
#include <set>

using namespace std;

int main(int argc, char const *argv[])
{
    set<int> arvore;
    set<int>::iterator it;

    arvore.insert(30);
    arvore.insert(20);
    arvore.insert(10);
    arvore.insert(10);
    arvore.insert(40);
    arvore.insert(50);
    arvore.erase(20);

    cout << "quantidade de elementos: " << arvore.size() << "\n";
    cout << "elementos ";

    for (it = arvore.begin(); it != arvore.end(); ++it){
        cout << *it << " "; 
    }
    cout << "\n";

    //multiset aceita elementos de mesmo valor 
    
    

    return 0;
}
