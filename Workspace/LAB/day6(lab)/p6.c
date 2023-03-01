#include <stdio.h>

int main()
{
    
    int j,a,p,c,f,v,x,q,z,m,k,l,w,s,o;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    p=1<<3;
    k=1<<7;
    l=p | k;
    printf("\nBinary form of a given number:");
    for (int i=7;i>=0;i--)
    {
        j=(a>>i) & 0x1;
        c=(p>>i) & 0x1;
        q=(k>>i) & 0x1;
        
        s=(l>>i) & 0x1;
        v=j ^ s;
        printf("%d",s);
    }


    
}