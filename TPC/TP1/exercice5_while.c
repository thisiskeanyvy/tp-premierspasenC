#include <stdio.h>

int main(void)
{
    int N;
    int i = 1;
    int somme = 0;

    printf("Saisissez un entier positif N : ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N doit être strictement positif.\n");
        return 1;
    }

    printf("Nombres de 1 à %d : ", N);
    while (i <= N) {
        printf("%d", i);
        if (i < N)
            printf(", ");
        somme += i;
        i++;
    }
    printf("\n");

    printf("Somme des nombres de 1 à %d = %d\n", N, somme);

    return 0;
}
