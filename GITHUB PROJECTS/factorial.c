#include <stdio.h>

int main()
{
    long int f, factorial = 1;
    printf("enter a non negative integer");
    scanf("%ld", &f);
    if (f < 0)
    {
        printf("factorial of a negative number does not exist");
    }
    else
    {
        for (int i = 1; i <= f; i++)
        {
            factorial = factorial * i;
        }
        printf("%ld! is equal to %ld", f, factorial);
    }

    return 0;
}