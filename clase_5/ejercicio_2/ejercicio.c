#include <stdio.h>
#include <stdlib.h>
#include "ejercicio.h"

void inicializar( ePersona pers[] , int cantidad ) {
    int i;

    for( i = 0 ; i < cantidad ; i++ ) {
        pers[i].isEmpty = 1;
    }
}

void alta( ePersona pers[], int cantidad ){
    int i;
    int flag = 0;

        for( i = 0; i < cantidad; i++ ){
            if (pers[i].isEmpty != 0) {
                printf("\nApellido: ");
                fflush(stdin);
                scanf("%s", pers[i].apellido);

                printf("\nNombre: ");
                fflush(stdin);
                scanf("%s", pers[i].nombre);

                printf("\nEdad: ");
                scanf("%d", &pers[i].edad);

                printf("\nDia: ");
                scanf("%d", &pers[i].fechaNacimiento.dia);

                printf("\nMes: ");
                scanf("%d", &pers[i].fechaNacimiento.dia);

                printf("\nAnio: ");
                scanf("%d", &pers[i].fechaNacimiento.anio);

                pers[i].isEmpty = 0;
                flag = 1;
            }
        }
        if(flag == 0) {
            printf("No hay espacio suficiente");
        }
}

void mostrarTodos( ePersona pers[], int cantidad ){
    int i;

    for( i = 0; i < cantidad; i++ ){
        if(pers[i].isEmpty == 0) {
            mostrarUno(pers[i]);
        }
    }

}

void mostrarUno( ePersona per ){
        printf("%s\t%s\t%d\t%d\n", per.apellido, per.nombre, per.edad, per.isEmpty);
}

void ordenarPersonaPorEdad( ePersona pers[] , int cantidad ) {
    int i,j;
    ePersona auxPers;

    for( i = 0 ; i < cantidad-1 ; i++ ) {
        for( j = i + 1 ; i < cantidad ; j++ ) {
            if ( pers[i].edad > pers[j].edad ) {
                auxPers = pers[i];
                pers[i] = pers[j];
                pers[j] = auxPers;
            }
        }
    }
}

int menu() {
    int menu;

    printf("\n1) Alta. ");
    printf("\n2) Baja. ");
    printf("\n3) Modificacion. ");
    printf("\n4) Imprimir todos. ");
    printf("\n5) Salir.");
    printf("\nSeleccionar una opcion <1-5>: ");
    scanf( "%d" , &menu );

    return menu;
}
