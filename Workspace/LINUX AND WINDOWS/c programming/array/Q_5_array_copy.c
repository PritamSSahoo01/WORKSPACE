#include<stdio.h>

int main()
{
    int n1,i,n2;
    //int arr[n];
    printf("Enter the size of the array1:");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter the size of the array2:");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter the elements of the array1:");
    for(i=0;i<=n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
     printf("Values  of the array1 are:");
     for(i=0;i<=n1;i++)
    {
        printf("%d\t",arr1[i]);
    }
    for(i=0;i<=n2;i++)
    {
        arr2[i]=arr1[i];
    }
     printf("\nValues  of the array2 are:");
    for(i=0;i<=n2;i++)
    {
        printf("%d\t",arr2[i]);
    }
}