#include <stdio.h>
#include <stdlib.h>
#include "ejercicio.h"

#define CANT 3

int main(){

    ePersona pers[CANT];
    int idMenu;

    inicializar(pers , CANT);

    do {

        idMenu = menu();

        switch( idMenu ) {
            case 1:
                alta( pers , CANT );
                system("cls");
                break;
           /* case 2:
                //BAJA
                break;
            case 3:
                //MODIFICACION
                break; */
            case 4:
                mostrarTodos( pers , CANT );
                break;
            case 5:
                break;
        }

    } while ( idMenu != 5 );

    return 0;
}
