#include "devinette.h"
#include <stdio.h>
#include <stdlib.h>

void saisir_interval( int * valeur){
    printf("Valeur Max de l'intervalle :");
    scanf("%d", valeur);
}

int generation_chiffre(int valeur_Max){
    return rand() % valeur_Max+1;
}

void proposition(int* guess, int chiffre_a_trouve){
    printf("Proposez une valeur: ");
    scanf("%d", guess);
    if(*guess < chiffre_a_trouve) {
        printf("Plus grand\n");
    }
    else if (*guess > chiffre_a_trouve){
        printf("Plus petit\n");
    }
}
