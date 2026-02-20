#include <stdio.h>

struct Point {
    int x;
    int y;
};

void initialiser_point(struct Point *p, int x, int y)
{
    p->x = x;
    p->y = y;
}

void afficher_point(struct Point *p)
{
    printf("Point p1 : x = %d, y = %d\n", p->x, p->y);
}

int main(void)
{
    struct Point p1;

    initialiser_point(&p1, 10, 20);
    afficher_point(&p1);

    return 0;
}
