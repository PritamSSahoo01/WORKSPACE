#include<stdio.h>

int main()
{
    int a, b;
    printf("enter the number for a: ");
    scanf("%d", &a);
    //printf("\nBinary form of a given number:");
    printf("enter the number for b: ");
    scanf("%d", &b);
    printf("After swapping values are:%d and %d",a,b);
    //scanf("%d", &b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nBefore swapping values are:%d and %d",a,b);
}