#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int width=0 , height=0, aux=0;
    char borda, preencher;

    cout << "largura: ";
    cin >> width;
    cout << "altura: ";
    cin >> height;
    cout << "borda: ";
    cin >> borda;
    cout << "preenchimento: ";
    cin >> preencher;
    cout << "deseja preencher(0-nao, 1-sim): ";
    cin >> aux;


    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if ((i == 0)||(i == height-1))
            {
                cout << borda;
            }
            else if((j == 0)||(j==width-1))
            {
                cout << borda;
            }
            else
            {
                if (aux == 1)
                {
                    cout << preencher;
                }
                else
                {
                    cout << " ";
                }
            }   
        }
        cout << "\n";
        
    }
     

    return 0;
}
