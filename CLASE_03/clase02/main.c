#include <stdio_ext.h>
#include <stdlib.h>

#define LIMITE_ARRAY 3

int main()
{
    int numero[LIMITE_ARRAY];
    int numeroMaximo;
    int numeroMinimo;
    int i;

    for(i=0;i<LIMITE_ARRAY;i++)
    {
        printf("\nNumero %d:",i+1);
        while(scanf("%d",&numero[i]) != 1)
        {
            printf("\nError - Numero %d:",i+1);
            __fpurge(stdin);
        }
        if(i==0)
        {
            numeroMinimo = numero[i];
            numeroMaximo = numero[i];
        }
        else if(numero[i] > numeroMaximo)
        {
            numeroMaximo = numero[i];
        }
        else if(numero[i] < numeroMinimo)
        {
            numeroMinimo = numero[i];
        }
    }
    printf("Max: %d - Min: %d", numeroMaximo, numeroMinimo);
    for(i=0;i<LIMITE_ARRAY;i++)
    {
        if(numero[i] > numeroMinimo && numero[i] < numeroMaximo)
        {
            printf("Es el del medio %d", numero[i]);
            break;
        }
    }

/*





    printf("\nNumero 1:");
    while(scanf("%d",&pNumero) != 1)
    {
        printf("\nError - Numero 1:");
        __fpurge(stdin);
    }


    printf("\nNumero 2:");
    while(scanf("%d",&sNumero) != 1)
    {
        printf("\nError - Numero 2:");
        __fpurge(stdin);

    }

    if(sNumero > numeroMaximo)
    {
        numeroMaximo = sNumero;
    }
    else if(sNumero < numeroMinimo)
    {
        numeroMinimo = sNumero;
    }

    printf("\nNumero 3:");
    while(scanf("%d",&tNumero) != 1)
    {
        printf("\nError - Numero 3:");
        __fpurge(stdin);

    }
    if(tNumero > numeroMaximo)
    {
        numeroMaximo = tNumero;
    }
    else if(tNumero < numeroMinimo)
    {
        numeroMinimo = tNumero;
    }

    printf("Max: %d - Min: %d", numeroMaximo, numeroMinimo);

    if(pNumero < numeroMaximo && pNumero > numeroMinimo)
    {
        printf("Es el del medio %d", pNumero);
    }
    else if(sNumero < numeroMaximo && sNumero > numeroMinimo)
    {
        printf("Es el del medio %d", sNumero);
    }
    else if(tNumero < numeroMaximo && tNumero > numeroMinimo)
    {
        printf("Es el del medio %d", tNumero);
    }

*/
    return 0;
}
