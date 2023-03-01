#include<stdio.h>
int add(int *x,int *y)
{
    return *x+*y;
}

int main()
{
    int a,b,sum;
    printf("entre the values for a and b:");
    scanf("%d %d",&a,&b);
    int *p,*q;
    p=&a;
    q=&b;
    sum=add(p,q);
    printf("\n the sum is:%u",sum);
}