#include<stdio.h>
int find_greatest(int *x,int *y)
{
    if(*x>*y)
    {
        return *x;
    }
    else{
        return *y;
    }
}

int main()
{
    int a,b,find,*p,*q;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    p=&a;
    q=&b;
    find=find_greatest(p,q);
    printf("the greatest number is:%d",find);

    
}