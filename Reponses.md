# Minmax

1. ✅
2. En C, un tableau est seulement une référence vers la première valeur de celui-ci : on ne peut pas connaître la taille d'un tableau. C'est pour cela qu'on doit aussi renseigner en paramètre la taille du tableau pour pouvoir parcourir la taille exacte du tableau, au risque de parcourir dans la mémoire non consacré à l'application (et de provoquer un crash dû au manque de permission).
3. - On alloue dans la mémoire les variables x et y de type 'int', avec des valeurs vides.
   - On appelle la fonction 'f', dans lequel on met en paramètre les deux nombres à additionner/multiplier, ainsi que les deux variables x et y, en indiquant leur adresse mémoire (via la référence).
     - Pour la somme et le produit, on change la valeur des variables x et y en accédant à son pointeur.
   - On affiche les valeurs x et y, avec les valeurs changés.
4. ✅
5. ✅

# Création dynamique de tableaux

6. ```
   warning: function returns address of local variable
   ```
   => Le problème qui se pose est qu'il alloue de l'espace mémoire temporairement pour l'exécution de la fonction. Or en C, une variable dite "locale" est supprimé de la mémoire lorsqu'elle n'est plus utile.
7. ✅
8. ✅

# Matrices

9. ✅
10. ✅
11. ✅
12. ✅
13. ✅
