#include <stdio.h>

int main()
{
    int num,i,res=0;
    ;
    printf("Enter the range of natural number:");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        res=res+i;
    }
    printf("\nsum:%d",res);
}