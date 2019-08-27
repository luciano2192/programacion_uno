#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    char nombre[30];

    printf("Ingrese su nombre: \n");

    scanf("%s", nombre);

    printf("Ingrese su edad: \n");

    scanf("%d", &edad);

    while (edad <= 0) {
        printf("ERROR ! Ingrese nuevamente su edad: \n");
        scanf("%d", &edad);
    }

    printf("%s", nombre);
    printf("%d", edad);

    return 0;
}
