#include <stdio.h>
#include <stdlib.h>

#define CANT 3


int main() {
    int i;
    int legajo[CANT];
    int edad[CANT]
    float salario[CANT];

        for ( i = 0 ; i < CANTLEG ; i++ ) {
            printf("\nIngrese edad para el legajo %d: " , legajo[i]=(i+1));
            scanf("%d" , &edad);
            printf("\nIngrese sueldo para el legajo %d: " , legajo[i]=(i+1));
            scanf("%f" , &salario);
        };

        for ( i = 0 ; i < CANTLEG ; i++ ) {
            printf("\nLegajo: %d" , legajo[i]);
            printf("\nEdad: %d" , edad);
            printf("\nSalario: %d" , salario);
        };

    return 0;
}

