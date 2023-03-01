#include <stdio.h>
float interest(int, int, int);

int main()
{
    float pa, ir, tp, i;
    float sinterest;
    for (i = 0; i <= 3; i++)
    {
        printf("enter the values for principal amount:");
        scanf("%f", &pa);
        printf("\nenter the values for interest rate:");
        scanf("%f", &ir);
        printf("\nenter the values for time period:");
        scanf("%f", &tp);
        sinterest = interest(pa, ir, tp);
        printf("\nSimple interest of the give values are:%.2f\n", sinterest);
    }
}
float interest(int a, int b, int c)
{
    float si;
    si = (a * b * c) / 100;
    return si;
}