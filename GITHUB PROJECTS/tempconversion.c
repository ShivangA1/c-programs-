#include<stdio.h>
int main(){
    float c,f;
    printf("enter your temperature in celcius");
    scanf("%f",&c);
    f=(9/5.0*c)+32;
    printf("the temperature in fahrenheit is %f",f);
    return 0;

}
