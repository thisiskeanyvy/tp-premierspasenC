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

void afficher_tableau(double tab[], int taille)
{
    int i;
    for (i = 0; i < taille; i++)
        printf("  tab[%d] = %g\n", i, tab[i]);
}

int main(void)
{
    double tab[N];

    printf("Saisissez %d nombres :\n", N);
    saisir_tableau(tab, N);

    printf("\nContenu du tableau tab :\n");
    afficher_tableau(tab, N);

    return 0;
}
