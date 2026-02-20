#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    int age;
    float moyenne;
};

void saisir_etudiant(struct Etudiant *e)
{
    printf("Saisie des informations de l'étudiant :\n");
    printf("  Nom     : ");
    scanf("%49s", e->nom);
    printf("  Prénom  : ");
    scanf("%49s", e->prenom);
    printf("  Age     : ");
    scanf("%d", &e->age);
    printf("  Moyenne : ");
    scanf("%f", &e->moyenne);
}

void afficher_etudiant(struct Etudiant *e)
{
    printf("\n--- Informations de l'étudiant ---\n");
    printf("Nom     : %s\n", e->nom);
    printf("Prénom  : %s\n", e->prenom);
    printf("Age     : %d ans\n", e->age);
    printf("Moyenne : %.2f\n", e->moyenne);
}

int main(void)
{
    struct Etudiant e1;

    saisir_etudiant(&e1);
    afficher_etudiant(&e1);

    printf("\n--- Test strcpy(e1.nom, \"Dupont\") ---\n");
    strcpy(e1.nom, "Dupont");
    printf("Après strcpy(e1.nom, \"Dupont\"), le nom est : %s\n", e1.nom);
    printf("L'étudiant s'appelle maintenant : %s %s\n", e1.prenom, e1.nom);

    return 0;
}
