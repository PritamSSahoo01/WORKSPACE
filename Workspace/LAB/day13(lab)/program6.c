#include<stdio.h>
int factorial(int *x)
{
    int sum=1,i;
    for(i=1;i<=(*x);i++)
    {
        sum=sum*i;
    }
    printf("The factorial of 5 is :%d",sum);
}

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int *p;
    p=&num;
    factorial(p);
}