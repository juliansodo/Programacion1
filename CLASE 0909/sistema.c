int consultarSilla(int vectorSillas[], int cantidad, int silla)
{
    int retorno = 0;
    if(vectorSillas[silla] == -1)
    {
        retorno = 1;
    }
    return retorno;
}

int ocuparSilla(int vectorSillas[], int cantidad, int silla, int legajo)
{
    int retorno = 0;
    if(silla<cantidad)
    {
        if(consultarSilla(vectorSillas,cantidad,silla))
        {
            vectorSillas[silla] = legajo;
            retorno = 1;
        }
    }
    return retorno;
}

int cantSillasOcupadas(int vectorSillas[], int cantidad)
{
    int retorno = 0;
    int i;
    int contador = 0;
    for(i = 0; i<cantidad; i++)
    {
        if(vectorSillas[i] != -1)
        {
            contador++;
        }
    }
    return contador;
}
int cantSillasVacias(int vectorSillas[], int cantidad)
{
    int retorno = 0;
    int i;
    int contador = 0;
    for(i = 0; i<cantidad; i++)
    {
        if(vectorSillas[i] == -1)
        {
            contador++;
        }
    }
    return contador;
}

int primerSillaDesocupada(int vectorSillas[], int cantidad)
{
    int indice;
    int flag = 0;
    int i;
    for(i = 0; i<cantidad; i++)
    {
        if(flag == 0 && vectorSillas[i] == -1)
        {
            flag = 1;
            indice = i;
        }
    }
    return indice;
}
