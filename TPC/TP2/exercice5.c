#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    int age;
    float moyenne;
};

int main(void) {
    struct Etudiant e1;

    printf("Saisie des informations de l'étudiant :\n");
    printf("  Nom     : ");
    scanf("%49s", e1.nom);
    printf("  Prénom  : ");
    scanf("%49s", e1.prenom);
    printf("  Age     : ");
    scanf("%d", &e1.age);
    printf("  Moyenne : ");
    scanf("%f", &e1.moyenne);

    printf("\n--- Informations de l'étudiant ---\n");
    printf("Nom     : %s\n", e1.nom);
    printf("Prénom  : %s\n", e1.prenom);
    printf("Age     : %d ans\n", e1.age);
    printf("Moyenne : %.2f\n", e1.moyenne);

    printf("\n--- Test strcpy(e1.nom, \"Dupont\") ---\n");
    strcpy(e1.nom, "Dupont");
    printf("Après strcpy(e1.nom, \"Dupont\"), le nom est : %s\n", e1.nom);
    printf("L'étudiant s'appelle maintenant : %s %s\n", e1.prenom, e1.nom);

    return 0;
}
