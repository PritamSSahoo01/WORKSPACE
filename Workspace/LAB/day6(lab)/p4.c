#include <stdio.h>

int main()
{
    
    int j,a,p,c,f,v,x,q,m,k;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    p=1<<5;
    k=1<<0;
    v=p | k;
    printf("\nBinary form of a given number:");
    for (int i=7;i>=0;i--)
    {
        j=(a>>i) & 0x1;
        c=(p>>i) & 0x1;
        m=(k>>i) & 0x1;
        x=(v>>i) & 0x1;
        q = j ^ x;
        printf("%d",q);
    }


    
}