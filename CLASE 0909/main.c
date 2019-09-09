#include "extras.h"
#define CANTIDAD 5
int main()
{
    int sillas[CANTIDAD];
    int maximo;
    cargarArray(sillas, CANTIDAD);
    mostrarArray(sillas,CANTIDAD);
    printf("\nMaximo: %d", obtenerMaximo(sillas,CANTIDAD));
    printf("\nMinimo: %d", obtenerMinimo(sillas,CANTIDAD));
    printf("\n---------------------------------------------\n");
    if(ocuparSilla(sillas,CANTIDAD, 4, 23) == 1)
    {
      printf("Ocupando silla en la posicion 4 con el valor 23: OK\n");
    }
    else
    {
         printf("ERROR\n");
    }

    mostrarArray(sillas,CANTIDAD);

//    cargarArray(sillas, CANTIDAD);
    printf("\n---------------------------------------------\n");
    printf("\nCantidad de sillas ocupadas: %d", cantSillasOcupadas(sillas,CANTIDAD));
    printf("\nCantidad de sillas desocupadas: %d", cantSillasVacias(sillas,CANTIDAD));
    printf("\n---------------------------------------------\n");
    int primerSillaLibre = primerSillaDesocupada(sillas,CANTIDAD);
    int legajoPrimerSillaLibre = 955;
    printf("\nPrimer silla desocupada en el indice: %d", primerSillaLibre);
    printf("\nOCUPANDO LA SILLA EN EL INDICE %d con el valor %d: ", primerSillaLibre, legajoPrimerSillaLibre);
    if(ocuparSilla(sillas,CANTIDAD, primerSillaLibre, legajoPrimerSillaLibre) == 1)
    {
      printf("OK\n");
    }
    else
    {
         printf("ERROR\n");
    }
    mostrarArray(sillas, CANTIDAD);
        printf("\n---------------------------------------------\n");
    return 0;
}
