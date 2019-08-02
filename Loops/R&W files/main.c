#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 1000

int main(int argc, char *argv[])
{

    FILE *fscore = NULL;
    FILE *fichier = NULL;
    fscore = fopen("Score.txt","r+");
    fichier = fopen("Test.txt", "r");

    char chaine[TAILLE_MAX] = "";
    int score[3] = {0};


    if (fichier != NULL)
    {
      while(fgets(chaine, TAILLE_MAX, fichier) != NULL)
      {
      printf("%s", chaine);
      }
      fclose(fichier);
    }
    else
    {
        printf("Votre fichier ne peut etre ouvert");
    }


if (fscore != NULL)
{
    fscanf(fscore,"%d %d %d", &score[0], &score[1], &score[2]);
    printf("Les meilleurs scores sont : %d, %d, %d", score[0], score[1], score[2]);

    fclose (fscore);
}

    return 0;
}
