#include <stdio.h>
#include <stdlib.h>
#include "devinette.h"
#include <time.h>

int main() {
    srand(time(NULL));
    int choix_joueur, guess, chiffre_a_trouve = 0;
    saisir_interval(&choix_joueur);
    chiffre_a_trouve = generation_chiffre(choix_joueur);
    do{
        proposition(&guess, chiffre_a_trouve);
    }   while(guess!= chiffre_a_trouve);
    printf("\n\nBien joue le bon chiffre etait %d", chiffre_a_trouve);
    return 0;
}
