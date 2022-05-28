#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    scanf("%d", &n);

    if ( n % 11 == 0)
    {
        printf(" sim ");
    }
    else
    {
        printf("nao");
    }
    return 0;

}
