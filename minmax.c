#include <stdio.h>

int maximum(int *t, int n) {
    int indice = 0;
    for(int i = 1; i < n; i++)
        if(t[i] > t[indice])
            indice = i;
    return indice;
}

int minimum(int *t, int n) {
    int indice = 0;
    for(int i = 1; i < n; i++)
        if(t[i] < t[indice])
            indice = i;
    return indice;
}

void f(int a, int b, int *s, int *p) {
    *s = a + b;
    *p = a * b;
}

void minmax(int *t, int n, int *pmin, int *pmax) {
    *pmin = minimum(t, n);
    *pmax = maximum(t, n);
}

int main() {
    int tab[6] = {2, 6, 1, 8, 6};
    int indiceMax = maximum(tab, 6);
    printf("La valeur maximum du tableau est le %i (en indice %i).\n", tab[indiceMax], indiceMax);

    int x, y;
    f(12, 4, &x, &y);
    printf("x = %d, y = %d\n", x, y);

    int tab_minmax[10] = {3, 9, 1, 4, 14, 17, 21, 15, -4, 21};
    int pmin, pmax;
    minmax(tab_minmax, 10, &pmin, &pmax);
    printf("La valeur minimale est le %i (d'indice %i). La valeur maximale est le %i (d'indice %i).\n", tab_minmax[pmin], pmin, tab_minmax[pmax], pmax);
}