#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exercice.h"

int longueurChaine(const char* chaine);

int main (int argc, char* argv[])
{
    char chaine[] = "Salut";
    int longueur = 0;

    longueur = longueurChaine(chaine);
    printf("La chaine %s fait %d caracteres de long\n", chaine, longueur);

    return 0;
}
