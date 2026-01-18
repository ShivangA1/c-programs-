#include <stdio.h>
#include <stdbool.h>
#include<stdlib.h>
#include<string.h>
typedef struct studentrecordsystem
{
    char name[50];
    int rollno;
    char grade;
} stu;

int main()
{
    FILE *ptr;
    ptr = fopen("studentdetails.txt", "a+");
    if (ptr == NULL)
    {
        return 0;
    }
    else
    {
        while (true)
        {
            char na[50];
            char gr;
            int roll;
            printf("Enter name of the student");
            scanf("%49s",na);
            printf("enter roll no");
            scanf("%d",&roll);
            printf("enter grade");
            scanf(" %c",&gr);
            stu s1;
            strcpy(s1.name,na);
            s1.rollno=roll;
            s1.grade=gr;
            fprintf(ptr,"%s",s1.name);
            fprintf(ptr," %d",s1.rollno);
            fprintf(ptr," %c",s1.grade);
            printf("do you wish to continue");
            int ch=0;
            scanf("%d",&ch);
            if(ch==1)
            {
                break;
            }

        }
    }

    return 0;
}