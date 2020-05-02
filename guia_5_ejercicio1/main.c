#include <stdio.h>
#include <stdlib.h>

int main()
{
    char abecedario[28]={0};
    for (int i=0; i<=25 ; i++)
    {
        abecedario[i]=i+65;
        printf ("%c", abecedario[i]);
    }

    printf("\n");   //separacion
//modo puntero
    char *puntero_abecedario;
    char letra;
    letra='A';
    puntero_abecedario=&letra;

    for (int i=0; i<=25 ; i++)
    {
       printf ("%c", *puntero_abecedario+i);
    }

    return 0;
}
