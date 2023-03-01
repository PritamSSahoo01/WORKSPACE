#include<stdio.h>

int main()
{
    int a,i,count=0,ele;
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
    printf("\nafter reversing:");
    for (i=a-1;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }

}