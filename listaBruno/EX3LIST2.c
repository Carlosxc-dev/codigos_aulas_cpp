#include<stdio.h>

int main(int argc, char const *argv[])
{
    float pesoIdeal, sexo, h ;
    
    //printf("escolha[1-M; 2-F]: ");
    scanf("%f", &sexo);
    //printf("altura: ");
    scanf("%f", &h);

    if (sexo == 1)
    {
        pesoIdeal = (72.2 * h) - 58 ; 
    }
    else
    {
        pesoIdeal = (72.2 * h) - 44.7;
    }

    printf("Peso ideal e : %.1f", pesoIdeal);

    return 0;
}
