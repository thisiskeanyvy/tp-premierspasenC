#include <stdio.h>

#define N 10

int main(void) {
    int tab[N];
    int i, j;
    int temp;

    printf("Saisissez %d entiers :\n", N);
    for (i = 0; i < N; i++) {
        printf("  tab[%d] = ", i);
        scanf("%d", &tab[i]);
    }

    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            if (tab[j] < tab[i]) {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }

    printf("\nTableau trié (ordre croissant) :\n");
    for (i = 0; i < N; i++)
        printf("  tab[%d] = %d\n", i, tab[i]);

    return 0;
}
