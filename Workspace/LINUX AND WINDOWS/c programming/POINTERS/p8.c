#include<stdio.h>

int main()
{
    char a=10.12;
    char *p;
    p=&a;
    printf("the value of p is:%x",p);
    p++;
    printf("\nthe value of p after increment is:%x",p);
    p--;
     printf("\nthe value of p after decrement is:%x",p);

}