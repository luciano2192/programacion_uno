#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int contador = 0;
    float promedio;
    int suma;

    while( contador < 5 ) {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        suma += numero;
        contador++;
    }

    promedio = suma / contador;

    printf("Promedio : %f", promedio);

    return 0;
}
