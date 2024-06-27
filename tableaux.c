#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* copie(int *tab, int n) {
    int *tab2 = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        tab2[i] = tab[i];
    }
    return tab2;
}

int* unsurdeux(int *tab, int n) {
    int *tab_pairs = malloc(sizeof(int) * ceil((float) n/2));
    for(int i = 0; i < ceil((float) n/2); i++)
        tab_pairs[i] = tab[i*2];
    return tab_pairs;
}

int main() {
    int tab[5] = {1, 5, 2, 12, 8};
    int *tab2 = copie(tab, 5);
    printf("La derniere valeur de tab2 est %i.\n", tab2[4]);

    int *tab_pairs = unsurdeux(tab, 5);
    printf("i= %i\n", (int) ceil(5.0/2));
    for(int i = 0; i < ceil(5.0/2); i++) {
        printf("La valeur a l'indice %i est le %i.\n", i*2, tab_pairs[i]);
    }
    free(tab_pairs);
}