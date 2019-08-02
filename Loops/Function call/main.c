#include <stdio.h>
#include <stdlib.h>

int quadra(int nombre)
{
return 4 * nombre;
}
int main (int argc, char *argv[])
{
    int nsaisi = 0;
    printf("Veuillez saisir un nombre a multiplier par 4\n");
    scanf ("%d", &nsaisi);

       printf("Le quadruple de ce nombre est %d\n", quadra(nsaisi));

    return 0;
}
