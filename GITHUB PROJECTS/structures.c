#include<stdio.h>

typedef struct homeaddress
{
    int houseno;
    int block;
    char *city;
    char *state;
}add;

//sum of two vectors

struct vector
{
    int i;
    int j;
};

int sumvec(struct vector *ptr,struct vector *ptr1)
{
    return ptr->i + ptr1->i;
    return ptr->j + ptr1->j;
};
int main(){
    struct vector v1 ={1,2};
    struct vector *ptr = &v1;
    struct vector v2 ={6,7};
    struct vector *ptr2 = &v2;
    printf("%d %d",sumvec(ptr,ptr2));

    return 0;
}