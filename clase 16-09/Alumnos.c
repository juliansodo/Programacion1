
typedef struct {
    char Nombre[50];
    int  Legajo;
    int  Nota;
    int  Estado;
}stAlumno;

void CargarAlumnos(stAlumno listadoAlumnos[], int CANTIDAD)
{
    int i;
    for(i = 0; i <CANTIDAD; i++)
    {
        printf("Ingrese el nombre: ");

        gets(&listadoAlumnos[i].Nombre);
        printf("\nIngrese el legajo: ");
        scanf("%d", &listadoAlumnos[i].Legajo);
        printf("\nIngrese la Nota: ");
        scanf("%d", &listadoAlumnos[i].Nota);
        listadoAlumnos[i].Estado = 1;
    }
}

void ListarAlumnos(stAlumno listadoAlumnos[], int CANTIDAD)
{
    int i;
    for(i = 0; i <CANTIDAD; i++)
    {
        printf("\nEl nombre es: %s", listadoAlumnos[i].Nombre);
        printf("\nEl legajo es: %d", listadoAlumnos[i].Legajo);
        printf("\nLa nota es: %d", listadoAlumnos[i].Nota);
        printf("\nLa ocupacion es: %d", listadoAlumnos[i].Estado);

    }
}
