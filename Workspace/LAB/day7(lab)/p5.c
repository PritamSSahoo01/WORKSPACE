#include <stdio.h>

int main()
{
    int num;
    printf("Enter the year to check:");
    scanf("%d", &num);
    if (num ==0)
    {
        printf("%d is zero",num);
    }
    else if(num>0)
    {
        printf("%d is positive",num);
    }
    else
    {
        printf("%d is negative",num);
    }
}