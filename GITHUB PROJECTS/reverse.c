#include <stdio.h>
#include <string.h>

int main()
{
    char x[50];
    char y[50];
    printf("enter your word or number\n");
    scanf("%s", x);
    for (int i=0;i<strlen(x);i++){
        y[(strlen(x)-1)-i]=x[i];
        y[strlen(x)]='\0';
    }
    printf("%s",y);
    return 0;
}