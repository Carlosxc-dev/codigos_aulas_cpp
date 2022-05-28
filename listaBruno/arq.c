#include <stdio.h>

int main(int argc, char const *argv[])
{
    float antValor, novoValor;

    while (1)
    {
        // pegar dados
        printf("\n\ndigite o valor antigo: ");
        scanf("%f", &antValor);

        // saida do looping
        if (antValor == 0)
        {
            return 0;
        }

        // condicoes para novos precos
        if (antValor <= 50)
        {
            novoValor = antValor + 0.20 * antValor;
        }
        else if ((antValor >= 50) && (antValor <= 100))
        {
            novoValor = antValor + 0.15 * antValor;
        }
        else if ((antValor >= 100) && (antValor <= 200))
        {
            novoValor = antValor + 0.12 * antValor;
        }
        else
        {
            novoValor = antValor + 0.08 * antValor;
        }

        // condicoes novo preco
        if (novoValor <= 80)
        {
            printf("novo valor =  %.2f \n baratinho !!", novoValor);
        }
        else if ((novoValor >= 80) && (novoValor <= 120))
        {
            printf("novo valor =  %.2f \n preco normal !!", novoValor);
        }
        else if ((novoValor >= 120) && (novoValor <= 250))
        {
            printf("novo valor =  %.2f \n caro !!", novoValor);
        }
        else
        {
            printf("novo valor =  %.2f \n voce e rico !!", novoValor);
        }
    }
}
