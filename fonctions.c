//
// Created by Marie-Sophie Flament on 27/09/2021.
//

#include <stdio.h>
#include "fonctions.h"

/* Fonction qui donne le plus grand de 2 nombres.
* Paramètres :
* - IN : a et b, deux entiers entrés par l'utilisateur
* - OUT : a ou b selon lequel est le plus grand
*/

int getMax(int a , int b ) {
    printf("Saisissez deux entiers a et b\n");
    scanf("%d %d", &a, &b);
    (a > b)
    ? printf("l'entier a = %d est le plus grand\n",a) : printf("l'entier b = %d est le plus grand\n",b);
    return 0;
}

/* Fonction qui retourne un entier entré par l'utilisateur.
* Paramètres :
* - IN : n, un entier entrés par l'utilisateur
* - OUT : n
*/

int saisirEntier(int n) {
    scanf(" %d",&n);
    return n;
}

/* Fonction qui retourne le périmètre d'un rectangle
* Paramètres :
* - IN : largeur et longueur, deux entiers entrés par l'utilisateur
* - OUT : le périmètre d'un rectangle de telles largeurs et longueurs
*/

int calculPerimetre (int largeur, int longueur){
    printf ("Le périmètre est de %d\n" , 2* (largeur + longueur));
    return 2* (largeur + longueur);
}

/* Fonction qui retourne l'aire d'un rectangle
* Paramètres :
* - IN : largeur et longueur, deux entiers entrés par l'utilisateur
* - OUT : ll'aire d'un rectangle de telles largeurs et longueurs
*/
int calculAire (int largeur, int longueur){
    printf ("L'aire est de %d\n" , largeur * longueur );
    return largeur * longueur;
}

int exercice7(int nbClasses , int nbEleves, int total)
{
    int  i = 1;
    printf("Entrez le nombre de classes :\n");
    nbClasses = saisirEntier (nbClasses);
    for (i = 1; i <= nbClasses; i++)
    {
        printf("Entrez le nombre d'élèves :\n");
        nbEleves = saisirEntier(nbEleves);
        total += nbEleves;
        nbEleves = 0;
    }

    printf ("Le nombre total d'élèves est : %d\n", total);
    return 0;
}

int exercice8( int entier)
{
    printf("Entrez un entier\n");
    entier = saisirEntier(entier);
    while( entier % 2 != 0 || entier % 7 != 0 )
    {
        printf("Entrez un entier\n");
        entier = saisirEntier(entier);
    }
    printf("L'entier est divisible par 2 et 7\n");
    return 0;
}

int exercice9(int nbPierres , int nbEtages)
{
    int i = 1, res = 1;
    printf("Combien de pierres avez-vous?\n");
    nbPierres = saisirEntier(nbPierres);
    while (i < nbPierres + 1)
    {
        res += 1;
        i += res * res;
        nbEtages = res - 1;
    }
    printf("Vous pouvez construire %d étages\n", nbEtages);
    return 0;
}


int exercice10 (int nb, int somme, int nbElts, float moyenne)
{
    int i = 0;
    printf("Saisissez un entier positif\n");
    nb = saisirEntier(nb);
    somme += nb;
    nbElts += 1;
    while (nb >= 0)
    {
        printf("Saisissez un entier positif\n");
        nb = saisirEntier(nb);
        somme += nb;
        nbElts += 1;
    }
    moyenne = ((float) (somme - nb) / (float) (nbElts - 1));
    printf("La moyenne est %f \n", moyenne);
    return 0;
}
