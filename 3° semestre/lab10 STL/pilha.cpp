#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> pilha;
    int valor, aux;
    while (true)
    {
        cout << "1.Insira um elemento na pilha\n";
        cout << "2.Remova um elemento da pilha\n";
        cout << "3.Tamanho da pilha\n";
        cout << "4.Primeiro elemento da pilha\n";
        cout << "5.Sair\n";
        cout << "Escolha (1-5): ";
        cin >> valor;

        switch (valor)
        {
        case 1:
            cout << "digite o valor: ";
            cin >> aux;
            pilha.push(aux);
            break;
        case 2:
            cout << "elemento " << pilha.top() << "removido\n";
            pilha.pop();
            break;
        case 3:
            cout << "tamanho da pilha e " << pilha.size() << "\n";
            break;
        case 4:
            cout << "primeiro elemento da pilha e " << pilha.top() << "\n";
            pilha.top();
            break;
        case 5:
            return 0;
            break;
        
        default:
            cout << "valor invalido !!";
            break;
        }
        cout << "\n\n";
    }
    return 0;
}
