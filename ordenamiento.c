#include <stdio.h>
/*
Varible list 
float listNumber
int totalNumber
int firstPosition
*/
void main()
{
    int totalNumbber, pasada, firstPosition,posicionSegunda;
    unsigned int listNumber[totalNumbber];
    printf("¿Cúantos números son en total?\n");
    scanf("%i", &totalNumbber);
    for (int i = 0; i < totalNumbber; i++)
    {
        printf("\nNúmero %i:", i+1);
        scanf("%i", &listNumber[i]);
    }

    printf("el arreglo me lo entregaste así [ ");

    for (int n = 0; n < totalNumbber; n++)
    {
        printf("%i ",listNumber[n]);
    }
    printf(" ]\n");

    for (int i = 0; i < totalNumbber--; i++)
    {
        for (int j = 0; j < totalNumbber--; j++)
        {
            if (listNumber[j]>listNumber[j+1])
            {
                firstPosition = listNumber[j];
                listNumber[j]=listNumber[j+1];
                listNumber[j+1]=firstPosition;
            }
        }   
    }
    printf("Déspues de ordenarlo queda así [ ");
    for (int n = 0; n < totalNumbber; n++)
    {
        printf("%i ",listNumber[n]);
    }
    printf(" ]\n");
}
