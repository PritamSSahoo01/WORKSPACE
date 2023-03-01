#include<stdio.h>

int main()
{
    int a, b,res;
    printf("enter the first number:");
    scanf("%d", &a);
    printf("\nenter the second number:");
    scanf("%d", &b);
    res=a%b;
    if(res==0){
        printf("even");
    }
    else
    {
        printf("odd");
    }
}