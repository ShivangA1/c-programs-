// leap year calc
#include <stdio.h>

int main()
{
    int i;
    printf("enter your year");
    scanf("%d", &i);
    if (i % 4 == 0)
    {
        printf("%d is a leap year", i);
    }
    else
    {
        printf("%d is not a leap year", i);
    }
    return 0;
}