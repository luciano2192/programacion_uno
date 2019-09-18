typedef struct{
    int dia,mes,anio;
}eFecha;

typedef struct{
    char apellido[31];
    char nombre[31];
    int edad;
    eFecha fechaNacimiento;
    int isEmpty;
}ePersona;

int menu();

void inicializar( ePersona pers[] , int cantidad );

void alta( ePersona pers[], int cantidad );

void mostrarUno( ePersona per );

void mostrarTodos( ePersona pers[], int cantidad );

void ordenarPersonaPorEdad (ePersona pers[] , int cantidad);
