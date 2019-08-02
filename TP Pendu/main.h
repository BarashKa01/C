#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#endif // MAIN_H_INCLUDED
#define TAILLE_MAX 1000

typedef struct PENDU Pendu;

struct PENDU
{
  char joueur[40];
  char mystere[500];
};



int *nmot = NULL;
int choixmot = 0;

Pendu PARTIE;
char chaine[TAILLE_MAX] = "";


char LireCaractere()
{
    char caractere = 0;

    caractere = getchar();
    caractere=toupper(caractere);
    while (getchar != '\n');
    return caractere;
}

