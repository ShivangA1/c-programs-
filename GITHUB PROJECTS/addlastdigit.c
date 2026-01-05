#include <stdio.h>

int main()
{
    long long int x;
    int a, b, c, d;
    printf("enter your number");
    scanf("%lld", &x);
    a = x % 10;
    b = (x / 10) % 10;
    c = (x / 100) % 10;
    d = (x / 1000) % 10;
    printf("%d", a + b + c + d);
    return 0;
}