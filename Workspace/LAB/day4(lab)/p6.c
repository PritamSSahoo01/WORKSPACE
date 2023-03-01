#include<stdio.h>

int main()
{
    int a,c,d;
    printf("Enter a four digit number:");
    scanf("%d",&a);
    c=(a+8)/3;
    d=(c%5)*5;
    printf("%d",d);
}