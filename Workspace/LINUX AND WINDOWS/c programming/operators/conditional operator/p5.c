
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter the first number:");
    scanf("%d", &a);
    printf("\nenter the second number:");
    scanf("%d", &b);
    printf("\nenter the third number:");
    scanf("%d", &c);

    if (a > b & a > c)
    {
        printf("\nthe greater number is:%d", a);
    }
    else if (b > a & b > c)
    {
        printf("\nthe greater number is:%d", b);
    }
    else 
    {
        printf("\nthe greater number is:%d", c);
    }
}

