#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp;
    char data[100];
    char ch[100];
    fp = fopen("test.txt","r");
    // fgets(data,100,stdin);
    // fputs(data,fp);
    // char read;
    // read=fgetc(fp);
    // while (read != EOF)
    // {
    //     printf("%c",read);
    //     read=fgetc(fp);
    // };
    // fscanf(fp,"%s",&ch);
    // puts(ch);
    fgets(fp,100,stdin);
    fputs(fp,stdout);
    fclose(fp);
    
    return 0;
}