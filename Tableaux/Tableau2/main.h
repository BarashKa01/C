#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

void affiche(int tableau[], int tailleTableau)
{
    int i;
    for (i = 0; i < tailleTableau; i++)
    {
    printf("%d\n", tableau[i]);
    }
}

int SommeTableau(int tableau[], int tailleTableau)
{
 int i;
 int Sum = 0;
 for (i = 0; i < tailleTableau; i++)
 {
    Sum = Sum + tableau[i];
 }
return Sum;
}

double moyenneTableau (int tableau [], int tailleTableau)
{
int Somme = 0, i;
double moyenne = 0;
for (i=0; i < tailleTableau; i++)
{
    Somme=Somme+tableau[i];
}
moyenne = Somme/tailleTableau;
return moyenne;

}

void copie (int tableauOriginal[], int tableauCopie[], int tailleTableau)
{

int i;

for (i=0; i < tailleTableau; i++)
{
tableauCopie[i]=tableauOriginal[i];
}
affiche (tableauCopie, tailleTableau);
}

void maximumTableau (int tableau[], int tailleTableau, int valeurMax)
{
int i;
for (i = 0; i < tailleTableau; i++)
{
    if (tableau[i] > valeurMax)
    {
        tableau[i] = 0;
    }
}

affiche (tableau, tailleTableau);
}

void ordonnerTableau (int tableau[], int tailleTableau)
{
    int i, tableau2[4]={0};
    for (i = 0; i < tailleTableau; i++)
    {
        if (tableau[i] < tableau[0] || tableau[i] < tableau[1] && tableau[i] < tableau[2] && tableau[i] < tableau[3])
        {
          tableau2[0] = tableau[i];
        }

        else if (tableau[i] > tableau[0] || tableau[i] <= tableau[1] && tableau[i] < tableau[2] && tableau[i] < tableau[3])
        {
          tableau2[1] = tableau[i];
        }

        else if (tableau[i] > tableau[0] && tableau[i] > tableau[1] && tableau[i] >= tableau[2] && tableau[i] < tableau[3])
        {
          tableau2[2] = tableau[i];
        }

        else (tableau[i] > tableau[0] && tableau[i] > tableau[1] && tableau[i] > tableau[2] && tableau[i] > tableau[3]);
        {
          tableau2[3] = tableau[i];
        }

    }

printf("Le tableau reorganise est le suivant %d\n%d\n%d\n%d", tableau2[0], tableau2[1],tableau2[2],tableau2[3]);

}


#endif // MAIN_H_INCLUDED
