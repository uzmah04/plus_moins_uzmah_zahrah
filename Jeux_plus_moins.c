/*
Nom du programme: Jeux_plus_moins.c
Objectif: Les codes pour le Jeux plus_moins
Compilation: gcc -o Jeux_plus_moins Jeux_plus_moins.c
Execution: ./Jeux_plus_moins
*/

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
}

int main()
{
	int nombre_de_joueur;
	printf("Choisissez le nombre de joueur (1 ou 2): ");
	scanf("%d", &nombre_de_joueur);

	int nombre_de_tour;
	printf("Entrez le nombre de tour que vous voulez jouer: ");
	scanf("%d", &nombre_de_tour);

	int tour = 1;


	if (nombre_de_joueur == 1)
	{
		printf("\nMode de difficulte: \n    facile -> essai illimite \n    moyen -> 25 essai \n    difficile -> 10 essai \n");
		int choix_joueur;

		while (tour <= nombre_de_tour)
		{
			printf("\nTour %d:\n", tour);
			srand (time(NULL));
			int valeur_a_trouver = rand() % 101;

			int mode;
			printf("Choisissez le mode de difficulte: (1 -> facile, 2 -> moyen, 3 -> difficile)\n");
			scanf("%d", &mode);

			printf("\nDevinez le chiffre:\n");

			int essai = 1;

			switch(mode)
			{
				case 1:

					do
					{
						printf("essai %d\n", essai);
						essai++;
						scanf("%d", &choix_joueur);
						plus_moins(choix_joueur, valeur_a_trouver);
					}while (choix_joueur != valeur_a_trouver);
					break;

				case 2:
					do
					{
						printf("essai %d\n", essai);
						scanf("%d", &choix_joueur);
						plus_moins(choix_joueur, valeur_a_trouver);

						if (essai == 25)
						{
							printf("Vous avez perdu! Le chiffre est %d.\n", valeur_a_trouver);
							break;
						}

						essai++;
					}while (choix_joueur != valeur_a_trouver);
					break;

				case 3:
					do
					{
						printf("essai %d\n", essai);
						scanf("%d", &choix_joueur);
						plus_moins(choix_joueur, valeur_a_trouver);

						if (essai == 10)
						{
							printf("Vous avez perdu! Le chiffre est %d.\n", valeur_a_trouver);
							break;
						}

						essai++;
					}while (choix_joueur != valeur_a_trouver);
					break;

				default:
					printf("Erreur!! Vous deviez choisir entre 1, 2 et 3.\n");
					break;
			}

			tour++;

		}
	}

	else if (nombre_de_joueur == 2)
	{
		int choix_joueur;

		int score_j1, score_j2;
		int j1 = 0;
		int j2 = 0;

		while (tour <= nombre_de_tour)
		{
			int nombre_essai;
			printf("\nTour %d: Entrez le nombre d'essai: ",tour);
			scanf("%d", &nombre_essai);

			while (nombre_essai < 10)
			{
				printf("Le nombre d'essai doit etre minimum 10. Veuillez reessayer!!\n");
				scanf("%d", &nombre_essai);
			}

			int joueur = 1;

			while (joueur < 3)
			{
				int score = nombre_essai;

				srand (time(NULL));
				int valeur_a_trouver = rand() % 101;

				printf("*** Joueur %d ***\n", joueur);
				printf("\nDevinez le chiffre:\n");

				int essai = 1;

				do
				{
					printf("essai %d\n", essai);
					scanf("%d", &choix_joueur);
					plus_moins(choix_joueur, valeur_a_trouver);
					score--;

					if (essai == nombre_essai)
					{
						score = 0;
						printf("Vous avez perdu! Le chiffre est %d.\n", valeur_a_trouver);
						break;
					}

					essai++;
				}while (choix_joueur != valeur_a_trouver);

				if (joueur == 1)
				{
					j1 = j1 + score;
					score_j1 = score;
					printf("\nLe score de joueur1 est %d.\n", score_j1);
				}

				else
				{
					j2 = j2 + score;
					score_j2 = score;
					printf("\nLe score de joueur2 est %d.\n", score_j2);
				}

				joueur++;

			}

			tour++;

		}

		printf("\nLe score totale de joueur1 est %d.\n", j1);
		printf("Le score totale de joueur2 est %d.\n", j2);

		if (j1 > j2)
		{
			printf("\n\n    *~ Felicitations Joueur 1!! Vous etes le gagnant. ~*    \n");
		}

		else
		{
			printf("\n\n    *~ Felicitations Joueur 2!! Vous etes le gagnant. ~*    \n");
		}

	}

	else
	{
		printf("Erreur!! Vous devez choisir 1 ou 2.\n");
	}
}
