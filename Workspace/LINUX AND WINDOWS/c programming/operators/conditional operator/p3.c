#include<stdio.h>

int main()
{
    int a, b=5,res;
    printf("enter the first number:");
    scanf("%d", &a);
    printf("%d",sizeof(a%b)?b:a);
}