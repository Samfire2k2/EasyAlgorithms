#include <stdio.h>
//Algorithme du rectangle d'étoile (TP 1 3: Q3)

int main() {
    //Déclaration des variables
    int i, j, h; //Itérations, hauteur

    printf("Saisis la hauteur de la pyramide. \n");
    scanf("%d", &h);

    for (i = 1; i <= h; i++)
    {
        for (j = i; j < h; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}