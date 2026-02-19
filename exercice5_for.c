/*
 * TP 2 - Exercice 5 - Méthode 1 : avec une boucle for
 * Compilation : gcc exercice5_for.c -o exercice5_for
 * Exécution  : ./exercice5_for
 */
#include <stdio.h>

int main(void)
{
    int N;
    int i;
    int somme = 0;

    printf("Saisissez un entier positif N : ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N doit être strictement positif.\n");
        return 1;
    }

    printf("Nombres de 1 à %d : ", N);
    for (i = 1; i <= N; i++) {
        printf("%d", i);
        if (i < N)
            printf(", ");
        somme += i;
    }
    printf("\n");

    printf("Somme des nombres de 1 à %d = %d\n", N, somme);

    return 0;
}
