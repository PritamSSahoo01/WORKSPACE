#include <stdio.h>

int main()
{
    int a, b;
    printf("enter the first number:");
    scanf("%d", &a);
    printf("\nenter the second number:");
    scanf("%d", &b);
    if (a > b)
    {
        printf("Greatest number :%d", a);
    }
    else
    {
        //res = b;
        printf("\nsmallest number:%d", b);
    }
}