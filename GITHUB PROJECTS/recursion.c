#include<stdio.h>
#include<string.h>
#include<ctype.h>

#include <stdio.h>

int factorial(int n){
    if (n < 0) return -1;
    else if (n == 0) return 1;
    return n * factorial(n - 1);
}




int fibonacci(int n)
{
    if (n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int sum(int n)
{
    if (n==0){
        return 0;
    }

    return n + sum(n-1);
}

int josephus(int k,int l)
{
    int N;
    printf("enter number of person");
    scanf("%d",N);
    for (int i=1;i=k;i=i+l)
    {
        
    }
    
}
int countalpha(char *str)
{
    int vowel = 0;
    int consonants = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (isalpha(str[i]))
        {

            char ch = str[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowel++;
            }
            else
            {
                consonants++;
            }
        }
    }
    printf("no of vowels = %d\n", vowel);
    printf("no of cosonants = %d\n", consonants);
}

int arrays(int *arr, int n)
{
    int ch;
    printf("enter \n 1 for max \n 2 for min \n 3 for sum \n 4 for average");
    scanf("%d",&ch);
    if (ch == 1)
    {
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (x < arr[i])
            {
                x = arr[i];
            }
        }
        printf("%d is max element from the array", x);
    }
    else if (ch == 2)
    {
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (x > arr[i])
            {
                x = arr[i];
            }
        }
        printf("%d is min element from the array",x);
    }
    else if(ch==3)
    {
        int result=0;
        for(int i=0; i<n;i++)
        {
            result= result+arr[i];
        }
        printf("%d is sum of array",result);
    }
    else if(ch==4)
    {
       int result=0;
        for(int i=0; i<n;i++)
        {
            result= result+arr[i];
        }
        float average = result/n; 
        printf("%.2f is average of array",average);
    }
    else{
        printf("invalid input");
    }

}
int main(){
    int x;
    int *ptr =&x;
    *ptr=0;
    printf("%d",x);

    return 0;
}