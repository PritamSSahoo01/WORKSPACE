#include<stdio.h>
int add(int ,int);
int sub(int,int);
int div(int,int);
int mul(int,int);

int main()
{
    int a,b;
    printf("enter the values of a and b:");
    scanf("%d %d",&a,&b);
    add(a,b);
    sub(a,b);
    mul(a,b);
    div(a,b);
}
int add(int a,int b)
{
    printf("\naddition:%d",a+b);
}
int sub(int a,int b)
{
    printf("\nsubtraction:%d",a-b);
}
int mul(int a,int b)
{
    printf("\nmultiplication:%d",a*b);
}
int div(int a,int b)
{
    printf("\ndivision:%d",a/b);
}