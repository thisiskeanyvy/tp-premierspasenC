#include <stdio.h>

int main(void)
{
    int a, b;
    int temp;

    printf("Entrez le premier entier : ");
    scanf("%d", &a);

    printf("Entrez le deuxième entier : ");
    scanf("%d", &b);

    printf("Résultats : \n");
    printf("Addition (a + b) = %d\n", a + b); //Question 6
    printf("Soustraction (a - b) = %d\n", a - b); //Question 7
    printf("Multiplication (a * b) = %d\n", a * b); //Question 8
    if(b != 0) {
        printf("Division entière (a / b) = %d\n", a / b); //Question 9 - divison
    } else {
        printf("0");
    }

    if(b != 0) {
        printf("Reste (a mod b) = %d\n", a % b); //Question 9 - reste
    } else {
        printf("Impossibile de diviser par zero\n");
    }

    printf("\nAvant permutation : a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("Après permutation : a = %d, b = %d\n", a, b);

    return 0;
}