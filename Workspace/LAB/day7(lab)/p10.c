#include<stdio.h>

int main()
{
    int first=0,second=1,sum=0,next=0,a;
    //int i;
    printf("enter the range:");
    scanf("%d",&a);
    while(first<=a)
    {
        printf("%d ",first);
        sum=sum+first;
        next=first+second;
        first=second;
        second=next;
    }
}