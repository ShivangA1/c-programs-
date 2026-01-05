#include<stdio.h>

int main(){
    float p,r,t,res,total;
    printf("enter the following amounts and press enter after wach element \n principal amount \n rate of interest \n time ");
    scanf("%f%f%f",&p,&r,&t);
    res=(p*r*t)/100;
    total=res+p;
    printf("you will recieve %f rupees in %f years with an intrest rate of %f %%",total,r,t);
    return 0;
}