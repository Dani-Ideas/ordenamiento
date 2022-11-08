#include <stdio.h>
/*
Varible list 
float listaDeNumero
int numeroTotalDeNumeros
int posicionPrimra
int posicionSegunda
*/
void main()
{
    int numeroTotalDeNumeros=5, pasada, posicionPrimera,posicionSegunda;
    int listaDeNumeros[numeroTotalDeNumeros];
    /* printf("¿Cúantos numeros son en total?\n");
    scanf("%i", &numeroTotalDeNumeros);
    */
    for (int i = 0; i < numeroTotalDeNumeros; i++)
    {
        printf("\nNúmero %i:", i+1);
        scanf("%i", &listaDeNumeros[i]);
    }

    printf("el arreglo me lo entregaste así [ ");

    for (int n = 0; n < numeroTotalDeNumeros; n++)
    {
        printf("%i ",listaDeNumeros[n]);
    }
    printf(" ]\n");

    for (int i = 0; i < numeroTotalDeNumeros--; i++)
    {
        for (int j = 0; j < numeroTotalDeNumeros--; j++)
        {
            if (listaDeNumeros[j]>listaDeNumeros[j+1])
            {
                posicionPrimera = listaDeNumeros[j];
                listaDeNumeros[j]=listaDeNumeros[j+1];
                listaDeNumeros[j+1]=posicionPrimera;
            }
        }   
    }
    printf("Déspues de ordenarlo queda así [ ");
    for (int n = 0; n < numeroTotalDeNumeros; n++)
    {
        printf("%i ",listaDeNumeros[n]);
    }
    printf("]\n");
}
