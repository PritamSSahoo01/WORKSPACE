#include<stdio.h>

int main()
{
    int n,i,j,temp=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Values  of the array1 before sorting are:");
     for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
    printf("\nValues  of the array1 after sorting are:");
     for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

}