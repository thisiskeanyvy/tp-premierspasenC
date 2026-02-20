#include <stdio.h>

#define N 10

int main(void) {
    double tab[N];
    double x;
    int i;
    int occurrences = 0;

    printf("Saisissez %d nombres :\n", N);
    for (i = 0; i < N; i++) {
        printf("  tab[%d] = ", i);
        scanf("%lf", &tab[i]);
    }

    printf("Entrez l'élément X à rechercher : ");
    scanf("%lf", &x);

    for (i = 0; i < N; i++)
        if (tab[i] == x)
            occurrences++;

    printf("Le nombre d'occurrences de %g dans le tableau est : %d\n", x, occurrences);

    return 0;
}
