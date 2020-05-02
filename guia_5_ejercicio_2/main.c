#include <stdio.h>
#include <stdlib.h>

int main()
{
    char longitud='1';
    char *vector_char= NULL; //declaro un vector que va apuntar a valores char, lo pongo en null

    vector_char = &longitud; //ahora el vector apunta a la direccion de longitud
    printf ("longitud esta en la posicion %x \n", &longitud); //se imprime la direccion de longitud
    printf("en la posicion donde apunta el puntero %x \n", vector_char); //se muestra que efectivamente el puntero apunta a la direccion de longitud
    printf ("el contenido del puntero inicializado %c \n", *vector_char); //imprimo lo que hay en la posicion a la que apunta el puntero
    *(vector_char + 0) = 'h'; //queria ver que sumarle 0 es igual a no ponerlo
    *vector_char = 'h';
    *(vector_char + 1) = 'o'; //agrego valores manejandome con bytes que me muevo
    *(vector_char + 2) = 'l';
    *(vector_char + 3) = 'a';
    *(vector_char + 4) = 's';
    *(vector_char + 5) = 219; //ascii bloque negro
    *(vector_char + 6) = 'E';
    *(vector_char + 7) = 'R';
    *(vector_char + 8) = 'R';
    *(vector_char + 9) = 'ORk'; //muestra el ultimo caracter ¿por?, la k o lo que agregues adelante
    *(vector_char + 10) = 'a';
    *(vector_char - 10) = 'p';
    *(vector_char + 11) = 'E';
    *(vector_char + 12) = 'R';
    *(vector_char + 13) = 'R';
    *(vector_char + 14) = 'ORk'; //muestra el ultimo caracter ¿por?, la k o lo que agregues adelante
    *(vector_char + 15) = 'a';
    *(vector_char - 10) = 'p';
    *(vector_char + 6) = 'E';
    *(vector_char + 7) = 'R';
    *(vector_char + 8) = 'R';
    *(vector_char + 9) = 'ORk'; //muestra el ultimo caracter ¿por?, la k o lo que agregues adelante
    *(vector_char + 10) = 'a';
    for (int i= 0; i<=100; i++)
    {
       *(vector_char + i) = 'a';
    }
    *(vector_char - 10) = 'p';
    printf("en la posicion donde apunta el puntero %x \n", vector_char);
    printf ("el contenido del puntero %c \n", *vector_char);  //no imprime nada
    printf ("el contenido del puntero +1 %c \n", *(vector_char + 1)); //no imprime nada , pero en memoria veo los dos viendo &variable, si veo el puntero s
    printf ("el contenido del puntero +2 %c \n", *(vector_char + 2));
    printf ("el contenido del puntero +3 %c \n", *(vector_char + 3));
    printf ("el contenido del puntero +4 %c \n", *(vector_char + 4));
    printf ("el contenido del puntero +5 %c \n", *(vector_char + 5));
    printf ("el contenido del puntero +6 %c \n", *(vector_char + 6));
    printf ("el contenido del puntero +7 %c \n", *(vector_char + 7));
    printf ("el contenido del puntero +8 %c \n", *(vector_char + 8));
    printf ("el contenido del puntero +9 %c \n", *(vector_char + 9));
    printf ("el contenido del puntero +10 %c \n", *(vector_char + 10));
    printf ("el contenido del puntero -10 %c \n", *(vector_char - 10));

    return 0;
}
