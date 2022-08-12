#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
    int op, aux;
    priority_queue<int> priorid;


    while (true)
    {
        cout << "\n\n1.Insira um elemento na heap\n";
        cout << "2.Remova um elemento da heap\n";
        cout << "3.Tamanho da heap\n";
        cout << "4.Primeiro elemento da heap\n";
        cout << " 5.Sair\n";
        cout << "Escolha (1-5): \n";
        cout << "Entre com o valor a ser inserido: ";
        cin >> op;

        cout << "\n\n";
        switch (op)
        {
        case 1:
            cout << "digite o elemento: ";
            cin >> aux;
            priorid.push(aux);
            break;
        case 2:
            cout << "removendo o elemento " << priorid.top();
            priorid.pop();
            break;
        case 3:
            cout << "tamanho da heap: " << priorid.size();
            break;
        case 4:
            cout << "primeiro elemento da heap: " << priorid.top();
            break;
        case 5:
            cout << "saindo...";
            return 0;
            break;

        default:
            cout << "opcao invalida\n";
            break;
        }
        cout << "\n\n";
    }
}