#include<stdio.h>

int main()
{
    int a,i,sum=0;
    printf("Enter the size of the array:");
    scanf("%d",&a);
    int arr[a];
    printf("\nEnter the values for array:");
    for (i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nValues of the array is:");
    for (i=0;i<a;i++)
    {
        printf("%d\t",arr[i]);
    }
    for (i=0;i<a;i++)
    {
        sum=sum+arr[i];
    }
    printf("\nThe sum of the array is:%d",sum);
}