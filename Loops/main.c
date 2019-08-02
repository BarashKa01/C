#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{

const int MAX = 100, MIN = 1;
int mystery = 0, resultat = 0;
srand(time(NULL));

mystery = (rand() % (MIN - MAX + 1)) + MIN;

    while (resultat != mystery)
    {
        printf("Devinez le nombre mystère, compris entre 1 et 100\n");
        scanf ("d%", &resultat);

        if (resultat != mystery){
            printf ("Ce n'est pas le bon nombre, réessayez");
            scanf ("d%", &resultat);}
        else{
            printf("C'est le numéro gagnant ! bravo !");}
    }

}

