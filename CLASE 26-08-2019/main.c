#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dinero;
    char tipo;
    int contador;
    int maximoValorDolar = 0;
    int flag = 0;
    float promedioPesos = 0;
    int acumPesos = 0;
    int cantVecesConPesos =0;
    int cantVecesConDolares = 0;
    int cantVecesConLibras = 0;
    int cantVecesConBitcoin = 0;
    for(contador = 0; contador < 5 ; contador ++)
    {

        printf("Ingrese cantidad de dinero \n");
        scanf("%d", &dinero);

        printf("Ingrese el tipo de dinero ('p' para pesos \ 'd' para dolares \ 'l' para libras \ 'b' para bitcoins) \n");
        fflush(stdin);
        scanf("%c", &tipo);

        while(tipo != 'p' && tipo != 'd' && tipo != 'l' && tipo != 'b')
        {
        fflush(stdin);
        printf("ERROR ingrese correctamente el tipo de dinero ('p' para pesos \ 'd' para dolares \ 'l' para libras \ 'b' para bitcoins) \n");
        scanf("%c", &tipo);

        }

        if(flag == 0 && tipo == 'd')
        {
            flag = 1;
            maximoValorDolar = dinero;
        }
        if(tipo == 'd' && dinero > maximoValorDolar)
        {
            maximoValorDolar = dinero;
        }
        if(tipo == 'p')
        {
            acumPesos = acumPesos + dinero;
            cantVecesConPesos = cantVecesConPesos + 1;
        }
        else if(tipo == 'b')
        {
            cantVecesConBitcoin = cantVecesConBitcoin + 1;
        }
        else if(tipo == 'l')
        {
            cantVecesConLibras = cantVecesConLibras + 1;
        }
        else if(tipo == 'd')
        {
            cantVecesConDolares = cantVecesConDolares + 1;
        }
        promedioPesos = (float)acumPesos / cantVecesConPesos;



        /*while(tipo != 'p' && tipo != 'd' && tipo != 'l' && tipo != 'b')
        {
        printf("ERROR ingrese correctamente el tipo de dinero ('p' para pesos \ 'd' para dolares \ 'l' para libras \ 'b' para bitcoins) \n");
        scanf("%c", &tipo);

        }*/
    }
        system("cls");
        printf("El porcentaje de pesos sobre el total de monedas ingresadas es: %f \n", (float)cantVecesConPesos * 100 / 5);
        printf("El porcentaje de dolares sobre el total de monedas ingresadas es: %f \n", (float)cantVecesConDolares * 100 / 5);
        printf("El porcentaje de libras sobre el total de monedas ingresadas es: %f \n", (float)cantVecesConLibras * 100 / 5);
        printf("El porcentaje de bitcoin sobre el total de monedas ingresadas es: %f \n", (float)cantVecesConBitcoin * 100 / 5);
        printf("El valor maximo que se ingreso con la moneda dolar es: %d \n", maximoValorDolar);
        printf("El promedio del total en pesos es: %f \n \n", promedioPesos);
    return 0;
}
