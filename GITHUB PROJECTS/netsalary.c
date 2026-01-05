#include<stdio.h>

int main(){
    long int ns,gs,pf,ta,da,hra,bs;
    printf("enter your basic salary");
    scanf("%ld",&bs);
    pf=(bs*12)/100;
    ta=(bs*5)/100;
    da=(bs*5)/100;
    hra=(bs*10)/100;
    gs=bs+ta+da+hra;
    ns=gs-pf;
    printf("your net salary is %ld",ns);
    return 0;
}