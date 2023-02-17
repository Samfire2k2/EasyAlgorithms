#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//L'utilisateur devra trouver le nombre mystère de l'ordinateur (TP1 1)

int main()
{
    printf("Bonjour.\n");
    //Déclaration des variables
    int nbmyst;
    int max = 100, min = 0; //génération du nombre aléatoire
    int nbsaisi; //Nombre saisi par l'utilisateur
    int nbprop = 0; //Nombre de propositions de l'utilisateur
    srand(time(NULL));
    nbmyst=(rand() % (max - min + 1)) + min;
    do
    {
        do
        {
            printf("Donne un nombre entre %d et %d\n", min,  max);
            scanf("%d", &nbsaisi);
            nbprop = nbprop + 1;
            if(nbsaisi < nbmyst)
            {
                min = nbsaisi;
                printf("Plus grand. Donne un nombre entre %d et %d\n", min, max);
            }
            else if (nbsaisi > nbmyst)
            {
                max = nbsaisi;
                printf("Plus petit. Donne un nombre entre %d et %d\n", min, max); 
            }
        } while (nbsaisi <= min || nbsaisi >= max);

    } while (nbsaisi != nbmyst);
    
    printf("Tu as trouvé le nombre mystère %d en %d essais.", nbmyst, nbprop);
    
    return 0;
}