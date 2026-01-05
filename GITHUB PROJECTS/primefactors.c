#include<stdio.h>

int main(){
    long long int n;
    printf("enter your number");
    scanf("%lld",&n);
    for(long long int i=2; i<=n;i++)
    {
        while(n%i==0)
        {
            n = n/i;
            printf("%lld*",i);
            
        }
    }
    printf("1");
    return 0;
}