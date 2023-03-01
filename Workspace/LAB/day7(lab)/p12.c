#include<stdio.h>

int main()
{
    int num1,num2,maxdiv,i,flag=1;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    maxdiv=(num1>num2) ? num1:num2;
    while(flag)
    {
        if(maxdiv%num1==0 && maxdiv%num2==0)
        {
            printf("the lcm of two numbers %d and %d is %d",num1,num2,maxdiv);
            break;
        }
        ++maxdiv;
    }
}