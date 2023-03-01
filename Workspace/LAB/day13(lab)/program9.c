#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter the no.of elements to store:");
    scanf("%d",&n);
    int arr[n];
    printf("\nenter the values:");
    for(i=0;i<n;i++)
    {
        printf("element %d=",i);
        scanf("%d",&arr[i]);
    }
    int *p;
    p=&arr[n-1];
    printf("the elements of array in reverse order are:");
    for(i=n;i>0;i--)
    {
         printf("element %d=",i);
        printf("%d\n",*p);
        p--;
    }
   

}