#include<stdio.h>

int main()
{
    int a,i,sum1=0,sum2=0;
    printf("Enter the size of the array:");
    scanf("%d",&a);
    int arr[a];
    printf("\nEnter the values for array:");
    for (i=1;i<=a;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nValues of the array is:");
    for (i=1;i<=a;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=1;i<=a;i++)
    {
        if(arr[i]%2==0)
        {
            sum1=sum1+arr[i];
        }
        else{
            sum2=sum2+arr[i];
        }
    }
    printf("\nsum of all even and even numbers are:%d",sum1);
    printf("\nsum of all even and odd numbers are:%d",sum2);
}