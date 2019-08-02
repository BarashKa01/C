#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("char : %d octet\n", sizeof(char));
    printf("int : %d octet\n", sizeof(int));
    printf("long : %d octet\n", sizeof(long));
    printf("double : %d octet\n", sizeof(double));
    printf("float : %d octet\n", sizeof(float));
   // printf("char : %d octet\n", sizeof(char));

   int *Ageamis = NULL;
   int nombreAmis = 0, i = 0;


   printf("Combien d'amis avez-vous ?\n");
   scanf("%d", &nombreAmis);

   if (nombreAmis > 0)
   {
       Ageamis = malloc(nombreAmis * sizeof(int));
       printf("Le tableau AgeAmis fait %d octet\n", sizeof(Ageamis));
   }
   if (Ageamis == NULL)
   {
       printf("L'allocation n'a pas reussi, le programme va s'arreter !\n");
       exit(0);
   }

   for (i = 0; i < nombreAmis; i++)
   {
       printf("Quel age a l'ami numero %d ?\n", i+1);
       scanf("%d", &Ageamis[i]);
   }

   printf("\n\n Vos amis ont les ages suivants :\n");
   for (i = 0; i < nombreAmis; i++)
   {
       printf("i : %d\n", i);
       printf("L'age de votre ami numero %d est : ", i+1);
       printf("%d ans\n", Ageamis[i]);
   }
free(Ageamis);

    return 0;
}
