//equation solver
#include <stdio.h>

int main()
{
    float x1, x2, x3, y1, y2, y3, z1, z2, z3, c1, c2, c3, det, detx, dety, detz, x, y, z;
    printf("enter values of a1 a2 a3\n");
    scanf("%f%f%f", &x1, &x2, &x3);
    printf("enter values of b1 b2 b3\n");
    scanf("%f%f%f", &y1, &y2, &y3);
    printf("enter values of c1 c2 c3\n");
    scanf("%f%f%f", &z1, &z2, &z3);
    printf("enter values of constant\n");
    scanf("%f%f%f", &c1, &c2, &c3);
    detx = (c1 * (y2 * z3 - z2 * y3)) - (y1 * (c2 * z3 - z2 * c3)) + (z1 * (c2 * y3 - y2 * c3));
    dety = (x1 * (c2 * z3 - z2 * c3)) - (c1 * (x2 * z3 - z2 * x3)) + (z1 * (x2 * c3 - c2 * x3));
    detz = (x1 * (y2 * c3 - c2 * y3)) - (y1 * (x2 * c3 - c2 * x3)) + (c1 * (x2 * y3 - y2 * x3));
    det = (x1 * (y2 * z3 - z2 * y3)) - (y1 * (x2 * z3 - z2 * x3)) + (z1 * (x2 * y3 - y2 * x3));
    if (det == 0)
    {
        printf("the equation has no unique solution");
    }
    else
    {
        printf("the values are \nx = %.2f\ny = %.2f\nz = %.2f\n", detx / det, dety / det, detz / det);
    }
    return 0;
}