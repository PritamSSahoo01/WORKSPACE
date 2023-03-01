#include<stdio.h>

int main()
{
    int a,b;
    printf("enter the first number:");
    scanf("%d", &a);
    printf("\nenter the second number:");
    scanf("%d", &b);
    if(a<b)
    {
        printf("a is less than b.... so swapping is not possible ");
    }
    else
    {
        printf("Before swapping the values of a and b is:%d and %d ",a,b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("\nAfter swapping the values of a and b is:%d and %d ",a,b);
    }
}