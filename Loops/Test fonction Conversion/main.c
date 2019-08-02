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

int main()
{
   float renvoi = 0;
   int saisie = 0;

   printf ("Veuillez saisir votre chifre :\n\n");
   scanf ("%f", &renvoi);
   printf("Votre nombre converti est le %f", convEF(renvoi));

   return 0;
}
