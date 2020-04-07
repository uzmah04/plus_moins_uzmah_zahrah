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
}

int main()
{
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
