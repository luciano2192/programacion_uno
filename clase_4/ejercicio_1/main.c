#include <stdio.h>
#include <stdlib.h>

void miFgets(char[], int);

int main()
{
    int legajo[5];
    int sexo[5];
    int nombre[5][31];
    int isEmpty[5];
    int i , cantidad;

    for( i = 0 ; i < 5 ; i++ ) {
        isEmpty[i] = 1;
    }

    for( i = 0 ; i < 5 ; i++ ) {
        if (isEmpty[i] == 1) {
            printf("Legajo: ");
            miFgets(legajo , 5);
            printf("\nNombre: ");
            miFgets(nombre , 5);
            printf("\nSexo: ");
            miFgets(sexo , 5);
            isEmpty[i] = 0;
        }
    }

    for( i = 0 ; i < 5 ; i++ ) {
        printf( "\n%d\t%s\t%c" , legajo[i],nombre[i],sexo[i] );
    }

    return 0;
}


void miFgets(char nombre[], int cantidad){

    fflush(stdin);
    fgets(nombre, cantidad-2, stdin);

    nombre[cantidad-1] = '\0';
}

