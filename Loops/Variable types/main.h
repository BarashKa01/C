#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
//#define JOUEUR_MAX  1

typedef struct Personne Personne;
typedef struct Coordonnees Coordonnees;
typedef enum Volume Volume;


struct Personne
{
    char nom[100];
    char prenom[100];
    char age[4];
    char sexe [30]; //booléen 1 Garçon 0 = Fille
};

struct Coordonnees
{
    int x;
    int y;
};

enum Volume
{
    MUET = 0, FAIBLE = 10, MOYEN = 50, FORT = 100
};

//void creationPerso (int joueur[], int nbJoueurs)
//{


//}

#endif // MAIN_H_INCLUDED
