#include <stdio.h>
#include <stdlib.h>

int factorial(int );

int main(void) {
    int valor,result;
    printf("\nIngrese numero: ");
    scanf("%d",&valor);
    result=factorial(valor);
    printf("\nEl factorial de %d es %d",valor,result);

    return 0;
}

int factorial(int valor) {
    int resp = 1, i;

    for( i = valor; i > 0; i--) {
        resp *= i;
    }
    /*
    for( i = 1; i <= valor; i++) {
        res *= i;
    }
    */
    /*
    i=valor
    while ( i > 0 ) {
        res *= i
        i--;
    }
    */
    return (resp);
}
