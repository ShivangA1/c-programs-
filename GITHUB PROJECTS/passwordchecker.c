#include <stdio.h>
#include <string.h>
int main()
{
    char x[9] = "register";
    char y[9];
    int i = 3;
    while (i >= 0)
    {
        printf("\nenter your password\n");
        scanf("%8s", y);
        if (strcmp(x, y) == 0)
        {
            printf("\naccess granted\n");
            i=0;
        }
        else
        {
            i--;
            if (i > 0)
            {
                printf("\nwrong password %d tries left\n", i);
            }
            else
            {
                printf("access denied");
            }
        }
    }

    return 0;
}