#include <stdio.h>
#include <string.h>

int main()
{
    char x[9] = "register";
    char y[9];
    int attempt = 3;
    while (attempt > 0)
    {

        printf("enter your password \n");
        scanf("%8s", y);
        if (strcmp(x, y) == 0)
        {
            printf("\naccess granted");
            int choice, r, n;
            long int factorial_n = 1, factorial_r = 1, r_factorial = 1;
            float p, c, res;
            printf("\nwhat do you want to calculate \n 1 for permutation \n 2 for combination \n");
            scanf("%d", &choice);
            if (choice == 1)
            {
                printf("enter the value of n (no of things)\n");
                scanf("%d", &n);
                if (n < 0)
                {
                    printf("\nn cannot be negative");
                }
                else
                {
                    for (int i = 1; i <= n; i++)
                    {
                        factorial_n *= i;
                    }
                }
                printf("enter value of r (no of ways)\n");
                scanf("%d", &r);
                if (r < 0)
                {
                    printf("\nr cannot be negative");
                }
                else
                {
                    for (int i = 1; i <= n - r; i++)
                    {
                        factorial_r *= i;
                    }
                    p = factorial_n / factorial_r;
                    printf("\nvalue of permutation is %f", p);
                }
            }
            else if (choice == 2)
            {
                printf("enter the value of n (no of things\n)");
                scanf("%d", &n);
                if (n < 0)
                {
                    printf("\nn cannot be  negative");
                }
                else
                {
                    for (int i = 1; i <= n; i++)
                    {
                        factorial_n *= i;
                    }
                }
                printf("enter value of r (no of ways)\n");
                scanf("%d", &r);
                if (r < 0)
                {
                    printf("\nr cannot be negative");
                }
                else
                {
                    for (int i = 1; i <= n - r; i++)
                    {
                        factorial_r *= i;
                    }
                    for (int i = 1; i <= r; i++)
                    {
                        r_factorial *= i;
                    }
                }
                res = r_factorial * factorial_r;
                c = factorial_n / res;
                printf("\nvalue of combination is %f", c);
            }
            else
            {
                printf("\ninvalid choice");
            }
            attempt = 0;
        }
        else
        {
            attempt--;
            if (attempt > 0)
            {

                printf("\nwrong password %d tries left", attempt);
            }
            else
            {
                printf("\naccess denied");
            }
        }
    }

    return 0;
}