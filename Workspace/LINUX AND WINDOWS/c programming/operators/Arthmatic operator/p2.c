/*The program explain Arthmatic operations 
usage operators:-'+','-','*','/','%'*/


#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g;
    printf("enter the 2 number:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    c=a+b;
    printf("addition:%d\n",c);
    d=a-b;
    printf("subtraction:%d\n",d);
    e=a*b;
    printf("multiplication:%d\n",e);
    f=a/b;
    printf("division:%d\n",f);
    g=a%b;
    printf("modulo:%d",g);
    return 0;
}