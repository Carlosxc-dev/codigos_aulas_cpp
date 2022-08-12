#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) 
{ 
    priority_queue<float> prioridades;

    prioridades.push(1.7);
    prioridades.push(80.0);
    prioridades.push(65);
    prioridades.push(74);
    prioridades.push(28.9);
    prioridades.push(15.5);
    
cout << "removendo em ordem de prioridade \n";
while (!prioridades.empty())
{
    cout << prioridades.top() << "  ";
    prioridades.pop();
}

}