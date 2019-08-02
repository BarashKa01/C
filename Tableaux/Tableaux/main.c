#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int array1[]={1,2,3,4};
int array2[]={5,6,7,8};
int sum = 0;
double moyenne = 0;
int maxval = 0;
int main(int argc, char *argv[])
{
    int tableau[4] = {15, 23, 33}, tableau1[4] = {0};
    afftab(tableau, 4);
    sommeTab(tableau, 4, &sum);
    moytab(&moyenne, &sum);
    printf("La somme du tableau est de %d\n", sum);
    printf("La moyenne du tableau est de %f\n\n", moyenne);
    copietab(tableau, tableau1);
    printf("Saisissez la valeur maximum pour remettre a zero la case du tableau :\n\n");
    scanf("d%", &maxval);
    Maxtab(tableau1, 4, &maxval);
    afftab(tableau1, 4);
    afftab(array1,4);
sommeTab(array1,4,&sum);
printf("Somme=%d\n",sum);
afftab(array2,4);
sommeTab(array2,4,&sum);
printf("Somme=%d\n",sum);

    return 0;

}

