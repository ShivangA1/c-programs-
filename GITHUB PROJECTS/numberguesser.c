#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    printf("\n-----welcome to number guessor game-----\n");
    srand(time(NULL));
    a = rand() % 100;
    c = (a % 100 - a % 10) / 10;
    d = a % 10;

    while (1)
    {
        printf("\nenter your guess\n");
        scanf("%d", &b);
        if (a > b)
        {
            if (c == (b % 100 - b % 10) / 10 && d > b % 10)
            {
                printf("entered number is sligthly lower than the real number\n");
            }
            else
            {
                printf("entered number is lower than the real number\n");
            }
        }
        else if (b > a)
        {
            if (c == (b % 100 - b % 10) / 10 && d < b % 10)
            {
                printf("entered number is slightly higher than the real number\n");
            }
            else
            {
                printf("entered number is higher than the real number\n");
            }
        }
        else
        {
            printf("congratulations you guessed the correct number ");
            break;
        }
    }

    return 0;
}