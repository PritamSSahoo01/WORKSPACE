#include<stdio.h>
#include"math.h"

int main()
{
    int a,b,c,d;
    long float e,x1,x2;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("\nEnter the value of b:");
    scanf("%d",&b);
    printf("\nEnter the value of c:");
    scanf("%d",&c);
    e=(b*b)-(4*a*c);
    printf("Your quadratic equation is:%dx2+%dx+%d",a,b,c);
    if(a==0)
    {
        printf("\nOne root exist:");
        //d = -c/b;
        //printf("\nroot is:%d",d);
    }
    else if (e<0)
    {
        printf("\nimaginary roots exist");
        x1=(-b+sqrt(e))/(2*a);
        x2=(-b-sqrt(e))/(2*a);
        printf("\nimaginary roots are:%lf + %lfi",x1,x2);
        printf("\nimaginary roots are:%lf - %lfi",x1,x2);

    }
    else if(e>0)
    {
        printf("\nreal roots exist:");
        x1=(-b+sqrt(e))/(2*a);
        x2=(-b-sqrt(e))/(2*a);
        printf("\nreal roots are:%lf and %lf",x1,x2);
    }

}
