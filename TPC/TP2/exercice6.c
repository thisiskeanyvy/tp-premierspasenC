#include <stdio.h>

struct Rectangle {
    double largeur;
    double hauteur;
};

int saisir_rectangle(struct Rectangle *r)
{
    printf("Saisissez la largeur du rectangle : ");
    scanf("%lf", &r->largeur);
    printf("Saisissez la hauteur du rectangle : ");
    scanf("%lf", &r->hauteur);
    return (r->largeur > 0 && r->hauteur > 0);
}

double calculer_perimetre(struct Rectangle *r)
{
    return 2 * (r->largeur + r->hauteur);
}

double calculer_aire(struct Rectangle *r)
{
    return r->largeur * r->hauteur;
}

void afficher_resultats(struct Rectangle *r, double perimetre, double aire)
{
    printf("\nRectangle (largeur = %g, hauteur = %g)\n", r->largeur, r->hauteur);
    printf("Périmètre : %g\n", perimetre);
    printf("Aire      : %g\n", aire);
}

int main(void)
{
    struct Rectangle r;
    double perimetre, aire;

    if (!saisir_rectangle(&r)) {
        printf("Largeur et hauteur doivent être strictement positives.\n");
        return 1;
    }

    perimetre = calculer_perimetre(&r);
    aire = calculer_aire(&r);
    afficher_resultats(&r, perimetre, aire);

    return 0;
}
