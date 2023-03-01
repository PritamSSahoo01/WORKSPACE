#include<stdio.h>

int main()
{
    double n1,n2;
    printf("Enter the two decimal number:\n");
    scanf("%lf %lf",&n1,&n2);
    printf("Before swaping:%lf %lf\n",n1,n2);
    printf("After swaping: %lf %lf",n2,n1);
    return 0;
}