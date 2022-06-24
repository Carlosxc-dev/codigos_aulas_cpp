#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> pilha;
    queue<int> fila ;

    //inserir na pilha e na fila 
    for (int i = 0; i < 5; i++)
    {
        pilha.push(i);
        fila.push(i);
    }
    
    //imprimi pila 
    cout << "pilha: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << pilha.top() << " ";
        pilha.pop();
    }
    
    //imprimi fila
    cout << "\nfila" << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << fila.front() << " ";
        fila.pop();
    }
    
    return 0;
}

