#include<stdio.h>

int main()
{
    int a,i,sum=0,avg=0,gnum,lnum;
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
    for(i=0;i<a;i++)
    {
        sum=sum+arr[i];
    }
    printf("\nsum:%d",sum);
    printf("\nAverage of the array is:%d",sum/a);
    gnum=arr[0];
    for(i=0;i<a;i++)
    {
        if(arr[i]>gnum)
        {
            gnum=arr[i];
        }
        
    }
    printf("\nThe greatest number of the array is :%d",gnum);
    lnum=arr[a];
    for(i=0;i<a;i++)
    {
        if(arr[i]<lnum)
        {
           lnum=arr[i];
        }

        
    }
    printf("\nThe lowest number of the array is :%d",lnum);
    
      
    

}