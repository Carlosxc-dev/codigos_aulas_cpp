#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int op, aux;
    set<int> bst;
    set<int>::iterator it;

    while (true)
    {
        cout << "\n\n1. Inserir elemento\n";
        cout << "2. Remover elementos com determinado valor\n";
        cout << "3. Exibir elementos em ordem\n";
        cout << "4.Primeiro elemento da heap\n";
        cout << " 5. Exibir quantidade de elementos\n";
        cout << "6. Remover todos os elementos\n";
        cout << "7. Consultar quantidade de elementos com determinado valor\n";
        cout << "8. Sair";
        cin >> op;
        cout << "\n";

        switch (op)
        {
        case 1:
            cout << "digite o elemento: ";
            cin >> aux;
            bst.insert(aux);
            break;
        case 2:
            cout << "digite o elemento: ";
            cin >> aux;
            bst.erase(aux);
            break;
        case 3:
            cout << "exibindo elementos em ordem: ";
            stable_sort(bst.begin(), bst.end());
            for (it = bst.begin(); it != bst.end(); ++it)
            {
                cout << *it << " ";
            }
            cout << "\n";

            break;
        case 4:
            cout << "primeiro elemento da heap: ";
            break;
        case 5:
            cout << "tamanho da heap: " << bst.size();
            break;
        case 6:
            cout << "removendo todos os elementos\n";
            bst.erase(bst.begin(), bst.end());
            break;
        case 7:
            cout << "digite o elemento: ";
            cin >> aux;
            cout << " o valor tem " << bst.count(aux) << "repetidos";
            break;
        case 8:
            cout << "saindo...";
            return 0;
            break;
        default:
            cout << "opcao invalida\n";
            break;
        }
    }
}