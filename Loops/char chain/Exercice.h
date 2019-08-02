#ifndef EXERCICE_H_INCLUDED
#define EXERCICE_H_INCLUDED

int longueurChaine(const char* chaine)
{
    int nombreCaracteres = 0;
    char caractereActuel = 0;

    do
    {
        caractereActuel = chaine[nombreCaracteres];
        nombreCaracteres++;
    }
    while (caractereActuel != '\0');

    nombreCaracteres--;

    return nombreCaracteres;
}

#endif // EXERCICE_H_INCLUDED
