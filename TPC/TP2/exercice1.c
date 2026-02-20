#include <stdio.h>

#define N 10

int main(void) {
    double tab[N];
    int i;

    printf("Saisissez %d nombres :\n", N);
    for (i = 0; i < N; i++) {
        printf("  tab[%d] = ", i);
        scanf("%lf", &tab[i]);
    }

    printf("\nContenu du tableau tab :\n");
    for (i = 0; i < N; i++)
        printf("  tab[%d] = %g\n", i, tab[i]);

    return 0;
}
