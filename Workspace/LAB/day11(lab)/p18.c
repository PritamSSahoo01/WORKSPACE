#include <stdio.h>

int main()
{
    int a, i, j, c = 0, t = 0;
    printf("Enter the size of the array:");
    scanf("%d", &a);
    int arr[a];
    int prime[a];
    printf("\nEnter the values for array:");
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nValues of the array  before is:");
    for (i = 0; i < a; i++)
    {
        printf("%d\t", arr[i]);
    }
    for (i = 0; i < a; i++)
    {
        c = 0;
        for (j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                c = 1;
                break;
            }
        }
        if (c == 0)
        {
            prime[t] = arr[i];
            t++;
        }
    }
    for (i = 0; i < t; i++)
    {
        printf("\nprime numbers are:%d\t", prime[i]);
    }
}