#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

void SelectMot(int nummot, char fichier);
int comptemot ();



int main()
{

int *nmot = NULL;
int choixmot = 0;

Pendu PARTIE;
char chaine[TAILLE_MAX] = "";
FILE* fichiermotmystere = NULL;
fichiermotmystere = fopen("dico.txt", "r");


printf("Choisissez un nombre entre 1 et %d\n\n", comptemot());
scanf ("%d", &choixmot);
SelectMot(choixmot, fichiermotmystere);

printf("%s", *PARTIE.mystere);



    return 0;
}

void SelectMot(int nummot, char fichier)
{
    char *Motmystere = NULL;
    int i;
for (i = 0; i < nummot; i++)
    {
     char motTemp = fgets (chaine, TAILLE_MAX, fichier);
     Motmystere = &motTemp;
    }

    PARTIE.mystere = *Motmystere;
}

int comptemot ()
{
int i;
   if (fichiermotmystere != NULL)
   {
       i = 0;
        while (fgets(chaine, TAILLE_MAX, fichiermotmystere) != NULL)
       {
        i+1;
       }
    return i;
   }
   else
   {
       printf("Le fichier n'a pu être initialisé correctement, le programme va terminer");
       exit(0);
   }
}
