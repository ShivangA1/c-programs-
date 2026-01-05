#include <stdio.h>

int main()
{
    char x[99];
    printf("enter your number");
    scanf("%s", x);
    int count = strlen(x);
    int y = 1;
    if (count == 11)
    {
        for (int i = 0; i <= 8; i++)
        {
            if (x[i] != '0' && x[i] != '1')
            {
                y = 0;
                break;
            }
        }
        if (y == 1 && x[9]=='-' && x[10]=='1')
        {
            printf("%s correct input", x);
        }
        else
        {
            printf("invalid input 2 <wrong last number>");
        }
    }
    else if (count < 9)
    {
        printf("invalid input 3 <less than 9 numbers>");
    }
    else if (count > 10)
    {
        printf("invalid input 1 <more than 10 number>");
    }
    else
    {
        printf("invalid input 4 <other than 0,1 character>");
    }

    return 0;
}