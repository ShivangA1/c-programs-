#include <stdio.h>

int main()
{
    int i = 1;
    float x, res = 0;
    while (i == 1)
    {
        printf("enter your number");
        scanf("%f", &x);
        res += x;
        printf("do you wish to continue \n 1 to continue \n 2 to exit");
        scanf("%d", &i);
    }
    printf("\n your addition is %f", res);
    return 0;
}