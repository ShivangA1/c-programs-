// pythagoras triplets checker
#include <stdio.h>

int main()
{
    float a, b, c;
    int ch = 1;
    while (ch == 1)
    {
        printf("enter the sides of triangle");
        scanf("%f%f%f", &a, &b, &c);
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
        {
            printf("sides are pythagorean triplets");
        }
        else
        {
            printf("sides are not pythagoream triplets ");
        }
        printf("\ndo you wish to continue\nenter\n1----->continue\n2----->exit\n ");
        scanf("%d", &ch);
        if (ch == 2)
        {
            break;
        }
    }
    return 0;
}