#include <stdio.h>

int main(int argc, char const *argv[])
{
    float salario;
    int tempo;

    //printf("digite o salario: ");
    scanf("%f", &salario);
    //print1200f("digite o tempo: ");
    scanf("%d", &tempo);

    if ((salario <= 500) && (tempo <= 1))
    {
        salario += salario * 0.25;
        printf("sem bonus");
        printf("salario = %.2f", salario);
    }
    else if (((salario > 500) && (salario <= 1000)) && ((tempo > 1) && (tempo <= 3)))
    {
        salario += salario * 0.20 + 100;
        printf("salario = %.2f", salario);
    }
    else if (((salario > 1000) && (salario <= 1500)) && ((tempo > 3) && (tempo <= 6)))
    {
        salario += salario * 0.10 + 200;
        printf("salario = %.2f", salario);
    }
    else if (((salario > 1000) && (salario <= 1500)) && ((tempo > 3) && (tempo <= 6)))
    {
        salario += salario * 0.10 + 300;
        printf("salario = %.2f", salario);

    }
    else if ((salario > 2000) && (tempo > 10))
    {
        salario = salario + 500;
        printf("sem bonus");
        printf("salario = %.2f", salario);
    }
    return 0;
}
