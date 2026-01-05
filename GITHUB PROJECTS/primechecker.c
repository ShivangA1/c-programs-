#include <stdio.h>

int main()
{
    int count = 0;
    long int x, y;
    printf("enter your number\n");
    scanf("%ld", &x);
    for (int i = 1; i <= x; i++)
    {
        y = x % i;
        if (y == 0)
        {
            count += 1;
        }
        else
        {
            continue;
        }
    }
    if (count == 2)
    {
        printf("\n%ld is a prime number", x);
    }
    else
    {
        printf("\n%ld is not a prime number", x);
    }

    return 0;
}