#include<stdio.h>

int main()
{
    int num,n1,n2,n3,n4,n5,res;
    printf("Enter the 5digit number:");
    scanf("%d",&num);
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n3=num%10;
    num=num/10;
    n4=num%10;
    num=num/10;
    n5=num%10;
    num=num/10;
    res=n2+n5;
    printf("sum:%d",res);
    return 0;
}