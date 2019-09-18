#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

#define CANT 3

int main(){
    //ePersona pers[CANT];

    //alta(pers, CANT);

    //system("cls");

    //mostrarTodos(pers, CANT);

     ePersona pers[CANT] = {
        {"Perez","Juan",34,0},
        {"Virun","Martin",23,0},
        {"Diaz","Pedro",78,0},
    };

    printf("ordenando...");
    ordenarPersonaPorEdad( pers , CANT );
    printf("Ordenados !");
    mostrarTodos( pers , CANT );

    return 0;
}
