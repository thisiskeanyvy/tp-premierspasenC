#include <stdio.h>

#define N 10

void saisir_tableau(int tab[], int taille)
{
    int i;
    for (i = 0; i < taille; i++) {
        printf("  tab[%d] = ", i);
        scanf("%d", &tab[i]);
    }
}

void trier_croissant(int tab[], int taille)
{
    int i, j, temp;
    for (i = 0; i < taille - 1; i++) {
        for (j = i + 1; j < taille; j++) {
            if (tab[j] < tab[i]) {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
}

void afficher_tableau(const int tab[], int taille)
{
    int i;
    for (i = 0; i < taille; i++)
        printf("  tab[%d] = %d\n", i, tab[i]);
}

int main(void)
{
    int tab[N];

    printf("Saisissez %d entiers :\n", N);
    saisir_tableau(tab, N);

    trier_croissant(tab, N);

    printf("\nTableau trié (ordre croissant) :\n");
    afficher_tableau(tab, N);

    return 0;
}
