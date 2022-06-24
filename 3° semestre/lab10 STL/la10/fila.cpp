#include <iostream>
#include <list>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> lista;
    list<int>::iterator it;
    int valor, aux;

    while (true)
    {
        cout << "1.Inserir elemento na frente\n";
        cout << "2.Inserir elemento no final\n";
        cout << "3.Excluir elemento na frente\n";
        cout << "4.Excluir elemento no final\n";
        cout << "5.Exibir primeiro elemento da lista\n";
        cout << "6.Exibir último elemento da lista\n";
        cout << "7.Tamanho da lista\n";
        cout << "8.Redimensionar lista\n";
        cout << "9.Remover elementos com valores específicos\n";
        cout << "10.Remover valores duplicados\n";
        cout << "11.Reverter a ordem dos elementos\n";
        cout << "12.Ordenar a lista\n";
        cout << "13.Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> valor;

        switch (valor)
        {
        case 1:
            cout << "digite o valor: ";
            cin >> aux;
            lista.push_front(aux);
            break;
        case 2:
            cout << "digite o valor: ";
            cin >> aux;
            lista.push_back(aux);
            break;
        case 3:
            cout << "digite o valor: ";
            cin >> aux;
            lista.pop_front();
            break;
        case 4:
            cout << "digite o valor: ";
            cin >> aux;
            lista.pop_back();
            break;
        case 5:
            cout << "primeiro elemento da lista e: " << "\n";
            cout << lista.front();
            break;
        case 6:
            cout << "ultimo elemento da lista e: " << "\n";
            cout << lista.back();
            break;
        case 7:
            cout << "tamanho da lista e:  " << lista.size() << "\n";
            break;
        case 8:
            cout << "redimencionar lista:  " ;
            cin >> aux;
            if (aux < lista.size())
                for (int i = 0; i < aux; i++)
                {
                    lista.remove(lista.size() -1 );
                }
            else
                for (int i = 0; i < aux; i++)
                {
                    lista.push_back(0);
                }
                
            break;
        case 9:
            cout << "valor a ser removido: ";
            cin >> aux ;
            lista.remove(aux);
            break;
        case 10:
            cout << "removendo valores duplos\n";
            lista.sort();
            lista.unique();
            break;
        case 11:
            cout << "revertendo lista\n";
            lista.reverse();

            break;
        case 12:
            cout << "ordenando a lista\n";
            lista.sort();
            break;
        case 13:
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
