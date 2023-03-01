#include <stdio.h>

int main()
{
    int num,i,res=1;
    ;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        res=res*i;
    }
    printf("\nfactorial:%d",res);
}