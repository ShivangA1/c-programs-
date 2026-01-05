#include <stdio.h>

int main()
{
    long int x, y;
    printf("enter your number");
    scanf("%ld", &x);
    for (int i = 1; i <= 10; i++)
    {
        y = x * i;
        printf("\n%ld*%d=%ld", x,i,y);
    }

    return 0;
}