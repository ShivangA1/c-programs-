#include<stdio.h>

int main(){
    int n,m,res=0;
    printf("enter your apprentice level");
    scanf("%d",&m);
    printf("enter your days");
    scanf("%d",&n);
    n=n*24;
    while(n>0)
    {
        res=res+m;
        n=n-24-m;
       
    }
    printf("your apprentice will save %d hours or %.1f days",res,(float)res/24);

    return 0;
}