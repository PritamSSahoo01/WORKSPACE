#include <stdio.h>

int main()
{
    int n, i, ele, j;
    // int arr[n];
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int arr[n];
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
    printf("\nEnter the element to delete:");
    scanf("%d", &ele);
    for (i = 0; i < n; i++)
    {
        if (ele == arr[i])
        {

            for (j = 0; j < n; j++)
            {
                arr[i] = arr[i + 1];
                //n--;
            }
            n--;
        }
       
    }
    printf("\nValues  of the array after delete are:");
    for (i = 0; i <= n; i++)
    {
        printf("%d\t", arr[i]);
    }
}