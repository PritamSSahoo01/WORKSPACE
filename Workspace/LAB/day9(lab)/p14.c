#include<stdio.h>
int factorial(int);

int main()
{
    int a,c;
    printf("enter the range:");
    scanf("%d",&a);
    c=factorial(a);
    printf("THE SUM OF THE SERIES IS:%d",c);
}
int factorial(int a)
{
    int fact=1,sum=0;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
        sum=sum+fact/i;
    }
    return sum;
}