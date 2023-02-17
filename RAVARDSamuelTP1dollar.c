#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//Algorithme du rectangle d'étoile (TP 1 3: Q2)

int main() {
    //Déclaration des variables
    int i; //Itérations
    int j; 
    int l; //Lignes

    printf("Saisis le nombre de ligne(s) du triangle.\n");
    scanf("%d", &l);

    for (i=1; i<=l; i++)
     {
        for (j=1; j<=i; j++) 
        {
           printf("$"); 
        }
        printf("\n");
     }

    return 0;
}