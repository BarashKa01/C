#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char* argv[])
{
    FILE* fichier = NULL;
    Personne joueur[1] = {0};
   // creationPerso (joueur[], 1);

   Coordonnees Mypoint;
   // Creation d'un emplacement via structure coordonnées

   initCoo(&Mypoint);

   point.x = 10;
   point.y= 30;

    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Quel est votre Nom ?\n");
       scanf("%s", joueur[i].nom);
        printf("Quel est votre Prenom ?\n");
        scanf("%s", joueur[i].prenom);
        printf("Quel est votre age ?\n");
        scanf("%s", joueur[i].age);
        printf("Quel est votre sexe ? 1 pour garcon, 0 pour fille\n");
        scanf("%s", joueur[i].sexe);
    }
    printf("Le joueur numero 1 est %s\n\n", joueur[0].nom);
    printf("Le joueur numero 2 est %s\n\n", joueur[1].nom);

    return 0;
}


void initCoo(Coordonnees *point)
{
point->x = 0;
point->y = 0;
}

void initPerso
{

}
