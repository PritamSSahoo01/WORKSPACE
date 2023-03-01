#include<stdio.h>

int main()
{
    int a,i,j,temp=0;
    printf("Enter the size of the array:");
    scanf("%d",&a);
    int arr[a];
    printf("\nEnter the values for array:");
    for (i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nValues of the array  before is:");
    for (i=0;i<a;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0;i<=a-1;i++)
    {
        for(j=0;j<=a-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
    printf("\nValues  of the array1 after sorting are:");
     for(i=0;i<a;i++)
    {
        printf("%d\t",arr[i]);
    }
}