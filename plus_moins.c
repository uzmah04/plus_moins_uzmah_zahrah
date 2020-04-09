<<<<<<< HEAD
/*
Nom du programme: plus_moins.c
Objectif: Les codes  pour le jeux plus_moins
Compilation: gcc -o plus_moins plus_moins.c
Execution: ./plus_moins
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int plus_moins(int choix_joueur, int valeur_a_trouver)
{
	if (choix_joueur == valeur_a_trouver)
		printf("Bingo\n");

	else if (choix_joueur < valeur_a_trouver)
		printf("plus\n");

	else
		printf("moins\n");
=======
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int plus_moins(int choix_joueur, int valeur_a_trouver)
{
   if(choix_joueur == valeur_a_trouver)
    {
	printf("Bingo\n");
    }
    else if(choix_joueur < valeur_a_trouver)
    {
	printf("Plus\n");
    }
    else
    {
	printf("Moins\n");
    }
>>>>>>> master
}

int main()
{
<<<<<<< HEAD
	srand (time(NULL));
	int valeur_a_trouver = rand() % 101;
	int choix_joueur;
	printf("Devinez le chiffre:\n");
	do
	{
		scanf("%d", &choix_joueur);
		plus_moins(choix_joueur, valeur_a_trouver);
	}while (choix_joueur != valeur_a_trouver);
}
=======
    int mode;
    printf("Choisissez le mode de difficulte : 1)facile, 2)moyen, 3)difficile\n");
    scanf("%d", &mode);

    srand (time(NULL));
    int valeur_a_trouver = rand() % 100 + 1;

    int choix_joueur;

    printf("Devinez le chiffre :\n");
    int i = 0;

    switch(mode)
    {
	case 1:
		do
		{
			scanf("%d", &choix_joueur);
			plus_moins(choix_joueur, valeur_a_trouver);
    		}while (choix_joueur != valeur_a_trouver);
		break;

	case 2:
		do
		{
			i++;
			scanf("%d", &choix_joueur);
                        plus_moins(choix_joueur, valeur_a_trouver);

			if(i == 25)
			{
				printf("Vous avez perdu! Le chiffre est %d\n", valeur_a_trouver);
				break;
			}
		}while (choix_joueur != valeur_a_trouver);
		break;

	case 3:
		do
		{
			i++;
			scanf("%d", &choix_joueur);
                        plus_moins(choix_joueur, valeur_a_trouver);

			if(i == 10)
			{
				printf("Vous avez perdu! Le chiffre est %d\n", valeur_a_trouver);
				break;
			}
		}while (choix_joueur != valeur_a_trouver);
                break;

	default:
		printf("Erreur! Vous deviez choisir entre 1, 2 et 3.\n");
		break;
    }
}



>>>>>>> master
