#include <stdio.h>

int main()
{
    
    int j,a,p,c,f;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    p=1<<6;
    printf("\nBinary form of a given number:");
    for (int i=7;i>=0;i--)
    {
        j=(a>>i) & 0x1;
        c=(p>>i) & 0x1;
        f=j ^ c ;
        printf("%d",f);
    }


    
}