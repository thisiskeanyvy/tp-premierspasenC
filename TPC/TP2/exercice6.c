#include <stdio.h>

struct Rectangle {
    double largeur;
    double hauteur;
};

int main(void) {
    struct Rectangle r;

    printf("Saisissez la largeur du rectangle : ");
    scanf("%lf", &r.largeur);
    printf("Saisissez la hauteur du rectangle : ");
    scanf("%lf", &r.hauteur);

    if (r.largeur <= 0 || r.hauteur <= 0) {
        printf("Largeur et hauteur doivent être strictement positives.\n");
        return 1;
    }

    double perimetre = 2 * (r.largeur + r.hauteur);
    double aire = r.largeur * r.hauteur;

    printf("\nRectangle (largeur = %g, hauteur = %g)\n", r.largeur, r.hauteur);
    printf("Périmètre : %g\n", perimetre);
    printf("Aire      : %g\n", aire);

    return 0;
}
