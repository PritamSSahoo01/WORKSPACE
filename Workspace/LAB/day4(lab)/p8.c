#include<stdio.h>

int main()
{
    int a,b,c,d,fd,rb,rg;
    printf("Enter the total no of students:");
    scanf("%d",&a);
    printf("\nEnter the total number of boys in the class:");
    scanf("%d",&b);
    printf("\nenter the percentage of scoring grade 'A':");
    scanf("%d",&c);
    printf("\nEnter the total no of boys scoring grade 'A':");
    scanf("%d",&d);
    fd=(a*c)/100;
    rg=fd-d;
    printf("the total no of girls scoring garde'A' is:%d",rg);
    return 0;

}
