#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int abs_n;

    printf("Saisissez un nombre : ");
    scanf("%d", &n);

    if (n >= 0) {
        abs_n = n;
    }
    else {
        abs_n = -n;
    }

    printf("La valeur absolue de %d est %d.\n", n, abs_n);

    return 0;
}
