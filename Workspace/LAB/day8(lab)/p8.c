#include <stdio.h>
#include<math.h>

int calculate(int, int);

int main()
{
    int range_series,x,nume=1,deno=0,i;
    printf("enter the range of the series:");
    scanf("%d",&range_series);
    printf("enter the value of x:");
    scanf("%d",&x);
    printf("1+");
    for(i=1;i<=x;i++)
    {
         deno=deno+x;
        printf("%d/%d + ",nume,deno);
        
    }

}
