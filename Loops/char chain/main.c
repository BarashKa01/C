#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
    size_t strlen(const char* chaine);
    char chaine[] = "Salut les zouzous, ca va aujourd'hui ?\n";
    char reponse[100];
    int longueurChaine = 0;

    printf("%s\n", chaine);
    scanf("%s", &reponse);
    printf("Je suis content de savoir que %s\n\n", reponse);
    longueurChaine = strlen(reponse);
    printf("La chaine %s a une longueur de %d caracteres\n",reponse, longueurChaine);

    return 0;
}
