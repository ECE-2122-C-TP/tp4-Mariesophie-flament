//
// Created by Marie-Sophie Flament on 22/09/2021.
//
#include <stdio.h>
#include "cours4.h"
#include "fonctions.h"

/* Fonction qui donne le plus grand de 2 nombres. */

int exercice1 (int a ,int b){
    getMax (a,b);
}

/* Fonction qui retourne un entier entré par l'utilisateur.*/

int exercice2(int n){
    printf("Saisissez un entier\n");
    saisirEntier(n);
}

/* Fonction qui retourne le périmètre et l'aire d'un rectangle
* Paramètres :
* - IN : largeur et longueur, deux entiers entrés par l'utilisateur
* - OUT : le périmètre et l'aire d'un rectangle de telles largeurs et longueurs
*/

int exercice3(int largeur, int longueur){
    printf("Saisissez la largeur et la longueur du rectangle\n");
    largeur = saisirEntier(largeur);
    longueur = saisirEntier(longueur);
    calculPerimetre (largeur, longueur);
    calculAire (largeur, longueur);
    return 0;
}

/* Fonction qui détermine si un entier 1 est divisible par un entier 2
* Paramètres :
* - IN : entier1 et entier2, deux entiers entrés par l'utilisateur
* - OUT : 1 si entier1 est divisible par entier2, 0 sinon
*/

int exercice4(int entier1, int entier2) {
    printf("Saisissez deux entiers\n");
    entier1 = saisirEntier(entier1);
    entier2 = saisirEntier(entier2);
    if (entier1 % entier2 == 0){
        printf("%d est divisible par %d \n", entier1, entier2);
        return 1;
    }
    else{
        printf("%d n'est pas divisible par %d \n", entier1, entier2);
        return 0;
    }
}

/* Fonction qui renvoie la moyenne de 3 notes
* Paramètres :
* - IN : note1, note2 et note3, trois flottants entrés par l'utilisateur
* - OUT : leur moyenne si ils sont entre 0 et 20, -1 sinon
*/

float exercice5 (float note1, float note2, float note3){
    float faux = -1;
    printf("Saisissez trois notes entre 0 et 20\n");
    note1 = saisirEntier(note1);
    note2 = saisirEntier(note2);
    note3 = saisirEntier(note3);
    if (0 > note1 || note1 > 20){
        printf("%.1f\n", faux);
        return -1;
    }
    else if ((0 > note2 || note2 > 20) ){
        printf("%.1f\n", faux);
        return -1;
    }
    else if ((0 > note3 || note3 > 20) ){
        printf("%.1f\n", faux);
        return -1;
    }
    else{
        printf("La moyenne est de %.2f\n", ((note1 + note2 + note3) / (float) 3));
        return  (note1 + note2 + note3) / (float) 3 ;
    }
}


int exercice5Bis (){
    exercice7(0,0,0);
    exercice8(0);
    exercice9(0,0 );
    exercice10(0,0,0,0 );
    return 0;
}