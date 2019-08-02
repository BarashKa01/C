#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char** argv)
{
const int  MIN = 1;
int nombreMaximum = 0,mystery = 0, resultat = 0, i = 0, choix = 0;
int continuerPartie = 1;
srand(time(NULL));

while (continuerPartie > 0)
{
        printf("Choisissez le niveau de difficulté\n\n");
        printf("1. Nombre mystère entre 1 et 100\n");
        printf("2. Nombre mystère entre 1 et 1000\n");
        printf("3. Nombre mystère entre 1 et 10000\n");
        scanf("%d", &choix);

        switch (choix)
        {
    case 1 :
        nombreMaximum = 100;
        printf("Devinez le nombre mystère, compris entre 1 et 100\n");
        break;
    case 2 :
        nombreMaximum = 1000;
        printf("Devinez le nombre mystère, compris entre 1 et 1000\n");
        break;
    case 3 :
         nombreMaximum = 10000;
        printf("Devinez le nombre mystère, compris entre 1 et 10000\n");
        break;
    default :
        printf("On veut jouer au plus malin ? Le programme va se terminer \n\n");
        return 0;
        }
        mystery = (rand() % (MIN - nombreMaximum + 1)) + MIN;



    do
    {
        i++;
        scanf ("%d", &resultat);

        if (resultat < mystery)
        {
            printf ("Reessayez avec un plus grand nombre \n");
        }
        else if (resultat > mystery)
        {
            printf("Ressayez avec un nombre plus petit\n");
        }
        else
        {
            printf("C'est le numéro gagnant ! bravo !\n");
        }

    } while (resultat != mystery);

        printf("Nombre de tentatives : %d, voulez-vous rejouer ? Tapez 0 pour quitter, tapez 1 pour continuer\n\n", i);
        scanf("%d", &continuerPartie);
    }

    return 0;
}
