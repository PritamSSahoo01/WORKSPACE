#include<stdio.h>

int main()
{
    int j,a,i;
    printf("enter the number for a: ");
    scanf("%d",&a);
    printf("\nBinary form of a given number:");
    for (int i=7;i>=0;i--)
    {
        j=(a>>i) & 0x1;
        printf("%d",j);
    }
}