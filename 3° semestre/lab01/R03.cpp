#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int op;

    cout << "0 - sair\n";
    cout << "2 - 20 primeiros primos\n";
    cout << "1 - fat\n";
    cout << "4 - mudança de base\n";
    cout << "5 - retangulo\n";
    cout << "6 - soma ate n\n";
    cout << "7 - mdc\n";
    cout << "8 - binario\n";
    cout << "9 - palindromo\n";
    cout << "Escolha: ";
    cin >> op;


    switch (op)
    {
    case 1:
        cout << "voce escolheu sair";
        break;
    case 2:
        cout << "voce escolheu 20 primeiros primos";
        break;
    case 3:
        cout << "voce escolheu fat";
        break;
    case 4:
        cout << "voce escolheu mudança de base";
        break;
    case 5:
        cout << "voce escolheu retangulo";
        break;
    case 6:
        cout << "voce escolheu soma ate n";
        break;
    case 7:
        cout << "voce escolheu mdc";
        break;
    case 8:
        cout << "voce escolheu binário";
        break;
    case 9:
        cout << "voce escolheu palindromo";
        break;
    default:
        cout << "valor invalido\n";
        break;
    }
    return 0;
}

