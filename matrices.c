#include <stdio.h>
#include <stdlib.h>

struct Matrice {
    int nb_lignes;
    int nb_colonnes;
    int **valeurs;
};

struct Matrice matrice(int nbL, int nbC, int *valeurs) {
    struct Matrice m;
    int **tab = malloc(sizeof (int*) * nbL);
    m.nb_lignes = nbL;
    m.nb_colonnes = nbC;
    for (int i = 0; i < nbL; i++) {
        tab[i] = malloc(sizeof (int) * nbC);
        for (int j = 0; j < nbC; j++)
            tab[i][j] = valeurs[nbC * i + j];
    }
    m.valeurs = tab;
    return m;
}

struct Matrice multiplie(struct Matrice m1, struct Matrice m2) {
    struct Matrice m;
    int size = m1.nb_lignes;
    int **tab = malloc(sizeof (int*) * size);
    m.nb_lignes = size;
    m.nb_colonnes = size;
    for (int i = 0; i < size; i++) {
        tab[i] = malloc(sizeof (int) * size);
        for (int j = 0; j < size; j++) {
            tab[i][j] = 0;
            for (int n = 0; n < size; n++)
                tab[i][j] += m1.valeurs[i][n] * m2.valeurs[n][j];
        }
    }
    m.valeurs = tab;
    return m;

}

void affiche(struct Matrice matrice) {
    for (int i = 0; i < matrice.nb_lignes; i++) {
        for (int j = 0; j < matrice.nb_colonnes; j++)
            printf("%3i ", matrice.valeurs[i][j]);
        printf("\n");
    }
}

void efface(struct Matrice matrice) {
    for(int i = 0; i < matrice.nb_lignes; i++)
        free(matrice.valeurs[i]);
    free(matrice.valeurs);
}

int main() {
    int v1[12] = {
            1, 2, 3, 4,
            2, 4, 6, 8,
            3, 6, 9, 12,
    };
    struct Matrice m1 = matrice(3, 4, v1);
    affiche(m1);
    efface(m1);

    int v2[9] = {
            2, 2, 2,
            2, 2, 2,
            2, 2, 2
    };
    struct Matrice m2 = matrice(3, 3, v2);
    struct Matrice m3 = matrice(3, 3, v2);
    struct Matrice m4 = multiplie(m2, m3);
    affiche(m4);
    efface(m2);
    efface(m3);
    efface(m4);
}