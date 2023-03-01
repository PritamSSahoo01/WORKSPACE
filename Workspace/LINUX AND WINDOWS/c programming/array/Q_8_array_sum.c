#include<stdio.h>

int main()
{
    int n,i,sum=0;
    //int arr[n];
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("Values  of the array are:");
     for(i=0;i<=n;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0;i<=n;i++)
    {
        sum=sum+arr[i];
    }
    printf("\ntotal sum of the array is:%d",sum);
}