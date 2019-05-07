#include "foo.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
const float PI = 3.1415;

typedef struct figure {
    int x;
    int y;
    int r;
} circle;

int main()
{
    int r, a, b, c, pt;
    float pc, sc, st, x, y;

    printf("\nEnter x,y,radius of circle: ");
    scanf("%f %f %d", &x, &y, &r);
    pc = PerimetrC(r, PI);
    sc = SquareC(r, PI);

    printf("Perimetr: %f Square: %f\n", pc, sc);

    printf("\nEnter a,b,c for triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    pt = PerimetrT(a, b, c);
    st = SquareT(a, b, c);

    printf("Perimetr: %d Square: %f\n", pt, st);

    return 0;
}
