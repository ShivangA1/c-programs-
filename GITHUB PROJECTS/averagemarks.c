#include<stdio.h>

void main(){
    float a,b,c,d,e,marks,res;
    printf("enter maths marks");
    scanf("%f",&a);
    printf("enter physics marks");
    scanf("%f",&b);
    printf("enter engkish marks");
    scanf("%f",&c);
    printf("enter chemistry marks");
    scanf("%f",&d);
    printf("enter cs marks");
    scanf("%f",&e);
    marks=a+b+c+d+e;
    res=marks/5;
    printf("your total marks is %f \n percent is %f %%",marks,res);
}