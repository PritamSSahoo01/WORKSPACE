#include<stdio.h>

int main()
{
    int j,a,b,p,g,c;
    printf("enter the number for a: ");
    scanf("%d",&a);
    //printf("\nenter the number for b: ");
    //scanf("%d",&b);
    printf("\nBinary form of a given number:");
    for (int i=7;i>=0;i--)
    {
        j=(a>>i) & 0x1;
        printf("%d",j);
    }
    //printf("\nBinary form of a given number:");
    //for (int h=7;h>=0;h--)
    //{
       // p=(b>>h) & 0x1;
        //printf("%d",p);
    //}
    printf("\n%d",c=~a);
    //printf("\n%d",g=a|b);
    printf("\nBinary form of a given number AND OPERATION:");
    for (int h=7;h>=0;h--)
    {
        p=(c>>h) & 0x1;
        printf("%d",p);
    }
    //printf("\nBinary form of a given number OR OPERATION:");
    //for (int h=7;h>=0;h--)
    //{
       // p=(g>>h) & 0x1;
       // printf("%d",p);
    //}
    
    
}