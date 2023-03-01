#include<stdio.h>
float count(float *);

int main()
{
    float f=11.2;
    printf("the value of f is:%f",f);
    count(&f);
    printf("\nthe value of f is:%f",f);
}
float count(float *a)
{
    ++ *a;
}
