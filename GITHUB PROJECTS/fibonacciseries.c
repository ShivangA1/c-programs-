#include <stdio.h>

int main()
{
    int a = 0, b = 1, c;
    int n;
    printf("how many fibonacci no you want\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("\n%d", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}