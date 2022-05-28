#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    //printf("INSIRA o numero: ");
    scanf("%d", &n );

    if (( n % 3 == 0)&&(!(n % 5 == 0)))
    {
        printf("divisel por 3");
    }
    else if ( ( n % 5 == 0) && (!(n % 3 == 0)) )
    {
        printf("divisel por 5");
    }
    else 
    {
        printf("nao e divisel");
    }
    return 0;
}
