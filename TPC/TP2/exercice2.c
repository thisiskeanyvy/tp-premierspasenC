#include <stdio.h>

#define N 10

void saisir_tableau(double tab[], int taille)
{
    int i;
    for (i = 0; i < taille; i++) {
        printf("  tab[%d] = ", i);
        scanf("%lf", &tab[i]);
    }
}

int compter_occurrences(double tab[], int taille, double x)
{
    int i, count = 0;
    for (i = 0; i < taille; i++)
        if (tab[i] == x)
            count++;
    return count;
}

int main(void)
{
    double tab[N];
    double x;

    printf("Saisissez %d nombres :\n", N);
    saisir_tableau(tab, N);

    printf("Entrez l'élément X à rechercher : ");
    scanf("%lf", &x);

    printf("Le nombre d'occurrences de %g dans le tableau est : %d\n",
           x, compter_occurrences(tab, N, x));

    return 0;
}
