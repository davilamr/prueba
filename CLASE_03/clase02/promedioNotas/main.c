#include <stdio_ext.h>
#include <stdlib.h>

#define LIMITE_ARRAY 5
#define limpiar() __fpurge(stdin)
int main()
{
    int numero[LIMITE_ARRAY];
    int i;
    int acumuladorNotas = 0;
    float promedio;

    for(i=0;i<LIMITE_ARRAY;i++)
    {
        printf("\nIngrese Numero %d: ", i+1);
        while((scanf("%d", &numero[i]) != 1) || numero[i]<0 || numero[i]>10)
        {
            printf("\n Error - Ingrese Numero %d: ", i+1);
            limpiar();
        }
    }
    for(i=0;i<LIMITE_ARRAY;i++)
    {
        acumuladorNotas = acumuladorNotas + numero[i];
    }
    promedio = (float)acumuladorNotas/LIMITE_ARRAY;
    printf("El promedio de las notas es %.2f", promedio);


    return 0;
}
