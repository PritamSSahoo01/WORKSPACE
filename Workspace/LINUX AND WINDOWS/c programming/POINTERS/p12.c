#include<stdio.h>
int incr(int x[])
{
    int i;
    for(i=0;i<4;i++)
    {
        x[i]=x[i]+2;
    }
    printf("\nvalues after increment is:");
    for(i=0;i<4;i++)
    {
        printf("%d",x[i]);
    }
    
}
int main()
{
    int i;
    
    int a[4]={1,2,3,4};
    printf("the values before are:");
    for(i=0;i<4;i++)
    {
        printf("%d",a[i]);
    }
    incr(a);


}