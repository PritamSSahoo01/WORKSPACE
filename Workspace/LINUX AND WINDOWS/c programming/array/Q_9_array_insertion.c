#include <stdio.h>

int main()
{
    int n, i, ind,ele, j;
    // int arr[n];
    printf("Enter the size of the array within 20:");
    scanf("%d", &n);
    int arr[20];
    printf("Enter the elements of the array:");
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Values  of the array are:");
    for (i = 0; i <= n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\nEnter the index to add:");
    scanf("%d", &ind);
    printf("\nEnter the element to add:");
    scanf("%d", &ele);
    for (i = n-1; i < ind-1; i--)
    {
        arr[i]=arr[i+1];
       
    }
    arr[ind-1]=ele;
    printf("\nValues  of the array after add:");
    for (i = 0; i <= n; i++)
    {
        printf("%d\t", arr[i]);
    }
}