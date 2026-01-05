#include <stdio.h>
#include<string.h>

int main()
{
    char x[20][50];
    char y[20][50];
    int a;
    printf("how many strings you wanna enter?\n");
    scanf("%d", &a);
    for (int i = 0; i <= a; i++)
    {
        printf("enter your string");
        fgets(x[i], sizeof(x[i]), stdin);
    }
    for (int i = 0; i <= a; i++)
    {
        strcpy(y[i],x[a-i]);
    }
    for (int i = 0; i <= a; i++)
    {
        printf("%s", y[i]);
    }
    return 0;
}