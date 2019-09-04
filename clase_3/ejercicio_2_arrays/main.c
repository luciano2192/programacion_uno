#include <stdio.h>
#include <stdlib.h>

#define MAX 3

int main(void)
{
    int edad[MAX] , i , leg , contador = 0;
    float sueldo[MAX] , suma = 0 , prom , aux;
    char seguir;

    for(i=0;i<contador;i++)
    {
        edad[i]=0;
        sueldo[i]=0;
    }

    do
    {
        printf("Ingrese Legajo: ");
        scanf("%d" , &leg);
        printf("Ingrese Edad: ");
        scanf("%d" , &edad[leg-1]);
        printf("Ingrese el sueldo: ");
        scanf("%f" , &aux);
        sueldo[leg-1]=aux;
        fflush( stdin );
        printf("Desea ingresar otro dato S/N?");
        scanf("%c" , &seguir);
        contador++;
    } while(seguir == 's');

    for(i=0;i<contador;i++) {
        suma = suma+sueldo[i];
    }

    prom = suma / contador;

    printf("El sueldo promedio es %.2f",prom);
}
