#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int numero, i;
    int cadenaNumero[6];

    for( i = 0 ; i < 6 ; i++ ) {
        if(!isdigit(cadenaNumero[i])) {
            printf("Ingrese un numero: ");
        }
    }
    numero = atoi(cadenaNumero);
    printf("%d" , &numero);
    return 0;
}
