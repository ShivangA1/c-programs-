#include <stdio.h>
#include<windows.h>

int main()
{
    int n = 99;
    for (int i = n; i >= 0; i--)
    {
        if (i > 1)
        {
            Sleep(500);
            printf("%d bottles of beer on the wall, %d bottles of beer.\nTake one down and pass it around, %d bottles of beer on the wall.\n",i,i,i);
        }
        else if (i==1){
            printf("1  bottles of beer on the wall, 1 bottles of beer.\nTake one down and pass it around, no more bottles of beer on the wall.");
        }
        else{
            printf("no more bottles of beer on the wall, no more bottles of beer.\nTake one down and pass it around, no more bottles of beer on the wall.");
        }
    }
    return 0;
}