
void cargarArray(int arreglo[], int cantidad)
{
    int arregloAux[5] = {23,-1,45,-1,-1};
    int i;
    for(i=0;i<cantidad;i++)
    {
        arreglo[i] = arregloAux[i];
    }
}

void mostrarArray(int arreglo[], int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("%d, ",arreglo[i]);
    }
}

int obtenerMaximo(int arreglo[], int cantidad)
{
    int maximo = 0;
    int flag = 0;
    int i;
    for(i = 0; i<cantidad; i++)
    {
        if(flag == 0)
        {
            flag = 1;
            maximo = arreglo[i];
        }
        if(arreglo[i]>maximo)
        {
            maximo = arreglo[i];
        }
    }
    return maximo;
}

int obtenerMinimo(int arreglo[], int cantidad)
{
    int minimo = 0;
    int flag = 0;
    int i;
    for(i = 0; i<cantidad; i++)
    {
        if(flag == 0)
        {
            flag = 1;
            minimo = arreglo[i];
        }
        if(arreglo[i]<minimo)
        {
            minimo = arreglo[i];
        }
    }
    return minimo;
}
