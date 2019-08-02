#include <stdio.h>
#include <stdlib.h>

double convEF (double euro)
{
    return 6.55957 * euro;
}

double convFE (double franc)
{
    return franc / 6.55957;
}

int main(int argc, char *argv[])

{
    int selection = 0;
    float se = 0, sf = 0;

    printf ("Bonjour, entrez le numéro de votre choix\n\n");
    printf("1. Francs en Euros\n");
    printf("2. Euros vers Francs\n\n\n");
    scanf("%d", &selection);

      while (selection != 0)
      {
        if (selection == 1)
        {
            printf ("Veuillez saisir votre somme en Francs à convertir en Euros : \n");
            scanf ("%f", &se);
            printf ("Votre somme en Francs sera de %f\n\n", convFE(se));
        }
        else if (selection == 2)
        {
           printf ("Veuillez saisir votre somme en Euros a convertir en Francs : \n");
            scanf ("%f", &sf);
            printf ("Votre somme en Francs sera de %f\n\n", convEF(sf));
            printf("Une autre valeur à calculer ? faites 0 pour quitter\n");
            scanf("%d", &selection);
        }

        else if (selection == 0)
        {
            return main;
        }

        else
        {
            printf ("Veuillez saisir un choix valide, faites pas chier !! Pour sortir saisissez 0");
        }

      }
    return 0;
}
