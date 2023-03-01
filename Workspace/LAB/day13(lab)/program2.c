#include<stdio.h>

int main()
{
    int a,b;
    printf("Input the first number:");
    scanf("%d",&a);
    printf("Input the second number:");
    scanf("%d",&b);
    int *p,*q;
    p=&a;
    q=&b;
    printf("the sum is:%d",*p+*q);

}