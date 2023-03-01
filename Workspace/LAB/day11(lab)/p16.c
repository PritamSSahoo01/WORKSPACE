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
    printf("\nEnter the element to be searched :");
    scanf("%d",&ele);
    for(i=0;i<a;i++)
    {
        if(arr[i]==ele)
        {
            count=count+1;
            printf("The index of the element is:%d",i);
        }
    }
    if(count==1)
    {
        printf("\nELEMENT FOUND!!");
    }
    else{
        printf("inappropriate message");
    }
}