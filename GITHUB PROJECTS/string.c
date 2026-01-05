#include<stdio.h>
#include<string.h>

void slice(char *x,int n,int m)
{
    char str[100];
    int j=0;
    for (int i=n;i<=m;i++)
    {
        str[j]=x[i];
        j++;
    }
    str[j]='\0';
    puts(str);
}
int main(){
    char str[]="Shivang jaiswal";
    slice(str,0,10);
    return 0;
}