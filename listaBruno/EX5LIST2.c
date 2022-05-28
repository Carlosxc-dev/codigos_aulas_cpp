#include <stdio.h>

int main(int argc, char const *argv[])
{
    float raio, h, l, c;
    
    //printf("raio: ");
    scanf("%f", &raio);
    //printf("medidas caixa: ");
    scanf("%f %f %f", &h, &l, &c);

    if ( raio <= (h*l*c) )
    {
        printf("sim\n");  
    }
    else
    {
        printf("nao");
    }
    


    return 0;
}
