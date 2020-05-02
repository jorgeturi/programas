#include <stdio.h>
#include <stdlib.h>
void copiar_vector (float [],float [], int );
void copiar_vector (float vector_fuente[],float vector_destino[], int longitud)
{
 for (int i = 0; i<=longitud-1 ; i++)
    {
     vector_destino[i]=vector_fuente[i];
    }
}

void copiar_puntero (float *, float*);
void copiar_puntero ( float *valores, float *valores_destino)
{
    float *puntero_destino=NULL;
    float *puntero_fuente=NULL;
    puntero_fuente=valores;
    puntero_destino=&valores_destino;
 for (int i=0 ; i<5; i++)
 {
     *(puntero_destino+i) = *(puntero_fuente+i);
 }
}
int main()
{
    printf("Hello world!\n");
    float fuente [5] = {1.1,2.2,3.3,4.4,5.5};
    float destino [5];
    copiar_vector (fuente, destino, 5);
    for (int i = 0; i<5 ; i++)
    {
     printf ("%.1f \n",destino[i]);
    }

    printf ("\n");

    float *puntero_fuente=NULL;
    float valores= 1.1;
    puntero_fuente = &valores;
    *(puntero_fuente+1) = 2.2;
    *(puntero_fuente+2) = 3.3;
    *(puntero_fuente+3) = 4.4;
    *(puntero_fuente+4) = 5.5;

    float *puntero_destino=NULL;
    float valores_destino=0;

    void copiar_puntero(&valores,&valores_destino);
    puntero_destino=&valores_destino;
/*  *puntero_destino=*puntero_fuente;
    *(puntero_destino+1)=*(puntero_fuente+1);
    *(puntero_destino+2)=*(puntero_fuente+2);
    *(puntero_destino+3)=*(puntero_fuente+3);
    *(puntero_destino+4)=*(puntero_fuente+4);
 */
    for (int i=0; i<5; i++)
    {
    printf ("%.1f \n",(*puntero_destino+i));
    }
    return 0;
}
