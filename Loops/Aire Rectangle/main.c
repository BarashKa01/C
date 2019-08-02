#include <stdio.h>
#include <stdlib.h>

double aire(double largeur, double hauteur);

int main()
{
    float L = 0, H = 0;

    printf ("Bienvenue sur votre calculateur d'aire de rectangle !\n\n");
    printf("Veuillez saisir la largeur de votre rectangle :\n");
    scanf ("%f", &L);
    printf("Veuillez maintenant saisir la hauteur de votre rectangle :\n\n");
    scanf ("%f", &H);
    printf("L'aire de votre rectangle est de %f\n\n" , aire(L,H));

    return 0;
}

double aire(double largeur, double hauteur)

{
    return largeur * hauteur;
}
