#include <stdio.h>
#include <string.h>

int main()
    {
    char texto[]="VALERIA";
    char *p;
    int longitud=0;

    p = texto;
    while (*p!='\0')
    {
        longitud++;
        printf( "%c\n", *p ); /* Mostramos la letra actual */
        p++;                  /* Vamos a la siguiente letra */
    }
    printf( "La cadena \"%s\" tiene %i caracteres.\n", texto, longitud );
    }