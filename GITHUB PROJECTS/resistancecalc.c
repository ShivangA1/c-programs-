#include <stdio.h>

int main()
{
    int s, i = 1;
    float r, x, res = 0, rev = 0;
    printf("what do you want to calculate \n 1 for series \n 2 for parallel");
    scanf("%d", &s);
    if (s == 1)
    {
        while (i == 1)
        {
            printf("enter value of resistance");
            scanf("%f", &r);
            res = res + r;
            printf("do you wish to continue \n 1 to continue \n any to exit");
            scanf("%d", &i);
        }
        printf("equivalent resistance is %f ohm", res);
    }
     else if (s == 2)
    {
        while (i == 1)
        {
            printf("enter value of resistance");
            scanf("%f", &r);
            x = 1 / r;
            rev = rev + x;
            printf("do you wish to continue \n 1 to continue \n ant to exit");
            scanf("%d", &i);
        }
        res = 1 / rev;
        printf("equivalent resistance is %f ohm", res);
    }
    else
    {
        printf("invalid choice");
    }

    return 0;
}