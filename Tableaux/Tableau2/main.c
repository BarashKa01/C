#include <stdio.h>
#include <stdlib.h>
#include "main.h"


int Tableau[4]={15, 81, 22, 13}, Tableau2[4]={0}, choix = 0;
int tailleTab = 4;
int main()
{
    affiche (Tableau, tailleTab);
    printf("La somme du tableau est de : %d\n\n", SommeTableau(Tableau, tailleTab));
    printf("La moyenne de la somme du tableau est de : %f \n\n", moyenneTableau(Tableau, tailleTab));
    copie(Tableau, Tableau2, tailleTab);
   // printf("Veuillez definir une valeur maximum pour remettre à zero la case du tableau :\n\n");
   // scanf("%d", &choix);
   // maximumTableau (Tableau2, tailleTab, choix);
    ordonnerTableau (Tableau, tailleTab);
    return 0;
}
