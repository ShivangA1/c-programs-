// table generator
#include <stdio.h>

int main()
{
    int a, x;
    printf("enter your number\n");
    scanf("%d", &a);
    printf("enter the size of table\n");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        printf("%d * %d = %d\n", a, i, a * i);
    }

    return 0;
}