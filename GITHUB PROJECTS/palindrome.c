#include <stdio.h>
#include <string.h>

int main()
{
    char x[100];
    char y[100];
    printf("enter your number");
    scanf("%99s", x);
    for (int i = 0; i <= strlen(x)-1; i++)
    {
        y[i]=x[strlen(x)-1-i];
    }
    y[strlen(x)]='\0';
    if (strcmp(x,y)==0)
    {
        printf("%s is a pallindrome",x);
    }
    else{
        printf("%s is not a pallindrome",x);
    }
    
    return 0;
}