#include <stdio.h>
#include <stdlib.h>

#define MAX 3

int main(void)
{
    int edad[MAX] , isEmpty[MAX] , i , leg[MAX];
    float sueldo[MAX] , suma = 0 , prom , aux;
    char seguir;

    for(i=0;i<MAX;i++)
    {
        leg[i]=0;
        edad[i]=0;
        sueldo[i]=0;
        isEmpty[i]=1;
    }
    do {
        //agregar menu y switch


       for( i = 0 ; i < MAX ; i++ ) {
            if(isEmpty[i]==1){
                printf("Ingrese Legajo: ");
                scanf("%d" , &leg);
                printf("Ingrese Edad: ");
                scanf("%d" , &edad[i]);
                printf("Ingrese el sueldo: ");
                scanf("%f" , &aux);
                sueldo[i]=aux;
                fflush( stdin );
                isEmpty[i]=0;
                break;
            }
        }
    } while (opcion != 2);


    for(i=0;i<MAX;i++) {
        suma = suma+sueldo[i];
    }

    prom = suma / contador;

    printf("El sueldo promedio es %.2f",prom);
}
