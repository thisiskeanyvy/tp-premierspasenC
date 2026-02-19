#include <stdio.h>

int main(void)
{
    char c;

    printf("Saisissez un caractère : ");
    scanf(" %c", &c);

    printf("Caractère saisi : %c\n", c);
    printf("Code ASCII : %d\n", (int) c);

    return 0;
}