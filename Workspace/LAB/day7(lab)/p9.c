#include<stdio.h>

int main()
{
    int num,r=1;
    printf("enter the number");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
    {
        r=num*i;
        printf("\n%d x %d = %d",num,i,r);
    }
}  