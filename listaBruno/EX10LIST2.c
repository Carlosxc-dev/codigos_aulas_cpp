#include <stdio.h>

int main(int argc, char const *argv[])
{
    int comp, r, l, d;

    //printf("medida: ");
    scanf("%d", &comp);
    //printf("pos r: ");
    scanf("%d", &r);
    //printf("pos d: ");
    scanf("%d", &d);
    //printf("pos l: ");
    scanf("%d", &l);

    if (r >= comp / 2)
    {
        printf("nao");
    }
    else
    {
        if ( ( (comp - r) < (comp - d)) && ((comp - r) < (comp -l) ) )
        {
            printf("sim");
        }
        else
        {
            printf("nao");
        }
    }

    return 0;
}
