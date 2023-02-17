#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//Algorithme du rectangle d'étoile (TP 1 3)

int main() {
    //Déclaration des variables
    int i;
    int j; //Itérations
    int l; //Lignes
    int c; //Colonnes

    printf("Saisis le nombre de ligne(s) du rectangle.\n");
    scanf("%d", &l);
    printf("Saisis le nombre de colonne(s) du rectangle.\n");
    scanf("%d",&c);

    for (i=0; i<l; i++)
     {
        for (j=0; j<c; j++) {
           printf("*"); 
        }
        printf("\n");
     }

    return 0;
}