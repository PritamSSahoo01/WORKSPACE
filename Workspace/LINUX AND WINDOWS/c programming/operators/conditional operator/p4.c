#include<stdio.h>

int main()
{
    int a, b;
    printf("enter the first number:");
    scanf("%d", &a);
    printf("enter the second number:");
    scanf("%d", &b);
    if(a==b)
    {
        printf("\nSAME");
    }
    else if (a>b)
    {
        printf("\na is greater than b");
    }
    else if(a<b)
    {
        printf("\nb is greater than a");
    }
    else if(a<b)
    {
        printf("\nb is greater than a");
    }
    else if(a<=b)
    {
        printf("\na is less than b and may be equal");
    }
    else if(a>=b)
    {
        printf("\na is graeter than b and may be equal");
    }
    else if(a!=b)
    {
        printf("\na not equal to b");
    }
    else{
        printf("execution error");
    }
   
    

}