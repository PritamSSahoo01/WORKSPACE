#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("Values before swapping are %d and %d:\n",a,b);
    //scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("Values after swapping are %d and %d:\n",a,b);

}