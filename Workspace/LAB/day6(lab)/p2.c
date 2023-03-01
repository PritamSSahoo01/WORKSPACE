#include <stdio.h>

int main()
{
    /*int j,a,b,p,g,c;
    printf("Enter the value of a: );
    scanf("%d",&a);
    printf("\nenter the number for b: ");
    scanf("%d",&b);
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
    //*/
    int j,a,p,c,f;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    p=1<<2;
    printf("\nBinary form of a given number:");
    for (int i=7;i>=0;i--)
    {
        j=(a>>i) & 0x1;
        c=(p>>i) & 0x1;
        f=j | c ;
        printf("%d",f);
    }


    
}