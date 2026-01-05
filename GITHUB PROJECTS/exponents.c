#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, res;
    printf("enter your number");
    scanf("%f", &a);
    printf("enter power");
    scanf("%f", &b);
    res = pow(a, b);
    printf("your answer is %f", res);

        return 0;
}