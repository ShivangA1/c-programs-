#include <stdio.h>

int main()
{
    int a, b = 0, c = 1, n;
    printf("enter how many digits of fibonacci series you want \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        a = b;
        b = c;
        c = a + b;
        printf("%d\n", a);
    }
    return 0;
}