#include <stdio.h>
int main()
{
    float r, pie=3.14, a;
    printf("enter radius");
    scanf("%f", &r);
    a = pie * r * r;
    printf("area of circle is %f", a);
    return 0;
}