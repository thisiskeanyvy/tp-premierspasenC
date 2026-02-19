#include <stdio.h>

int main(void)
{
    int n;

    printf("Saisissez un entier : ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d est pair.\n", n);
    }
    else {
        printf("%d est impair.\n", n);
    }

    return 0;
}