#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <string.h>

void printinganimation()
{
    int n = rand() % 5;
    for (int i = 0; i <= n; i++)
    {
        Sleep(500);
        printf(".");
        fflush(stdout);
    }
    printf("\n");
}
int main()
{
    int input, computer = 0, human = 0;
    char user[10];
    char x[3][10] = {"rock", "paper", "scissor"};

    printf("\n-----WELCOME TO ROCK,PAPER,SCISSORS GAME-----\n ");
    while (1)
    {
        printf("\ndo you wish to play?\n");
        printf("1---->play\n2---->score\n3---->exit\n");
        scanf("%d", &input);
        if (input == 1)
        {
            srand(time(NULL));
            int index = rand() % 3;
            char comp[10];
            strcpy(comp, x[index]);
            printf("pick rock,paper or scissor\n");
            scanf("%9s", user);

            if (strcasecmp(user, "rock") != 0 && strcasecmp(user, "scissor") != 0 && strcasecmp(user, "paper") != 0)
            {
                printf("invalid input");
            }
            else
            {
                printf("computer is thinking");
                printinganimation();
                if (strcasecmp(user, comp) == 0)
                {
                    printf("draw computer chose %s\n", comp);
                    computer += 1;
                    human += 1;
                }
                else if (strcasecmp(comp, "scissor") == 0 && strcasecmp(user, "rock") == 0)
                {
                    printf("you win computer chose %s\n", comp);
                    human += 1;
                }
                else if (strcasecmp(comp, "rock") == 0 && strcasecmp(user, "scissor") == 0)
                {
                    printf("you lose computer chose %s\n", comp);
                    computer += 1;
                }
                else if (strcasecmp(comp, "paper") == 0 && strcasecmp(user, "rock") == 0)
                {
                    printf("you lose computer chose %s\n", comp);
                    computer += 1;
                }
                else if (strcasecmp(comp, "rock") == 0 && strcasecmp(user, "paper") == 0)
                {
                    printf("you win computer chose %s\n", comp);
                    human += 1;
                }
                else if (strcasecmp(comp, "paper") == 0 && strcasecmp(user, "scissor") == 0)
                {
                    printf("you win computer chose %s\n", comp);
                    human += 1;
                }
                else
                {
                    printf("you lose computer chose %s\n", comp);
                    computer += 1;
                }
            }
        }
        else if (input == 2)
        {
            printf("-----scorecard-----\n");
            printf("computer\thuman\n");
            printf("%d\t\t%d", computer, human);
        }
        else
        {
            break;
        }
    }
    return 0;
}