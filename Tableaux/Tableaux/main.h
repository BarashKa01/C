#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

void afftab(int tableau[], int tailletab)
{
    int i;
    for (i = 0; i < tailletab; i++)
    {
        printf("%d\n", tableau[i]);
    }
}

int sommeTab(int tableau[], int tailletab,int *somme)
{
    int i;
    for (i = 0; i < tailletab; i++)
    {
        *somme = *somme + tableau[i];
    }
}

double moytab (double *moy, int *somme)
{
    *moy = *somme / 2;
}

int copietab (int tableau[], int tableau1[])
{
    tableau1 = tableau;
    printf("le tableau copie est : \n");
    afftab(tableau1, 4);
}

void Maxtab(int tableau[], int tailletab, int *valmax)
{
int i = 0;

do
    {
        if (tableau[i] < *valmax)
        {
            i++;
        }

        else
        {
        tableau[i] = 322;
        i++;
        }

    } while (i < tailletab);

}

#endif // MAIN_H_INCLUDED
