#include <stdio.h>

int main()
{
    int a;
    printf("enter the number:\n");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("the number is 0");
    }
    else if (a < 0 && a % 2 != 0)
    {
        printf("negative odd");
    }
    else if (a < 0 && a % 2 == 0)
    {
        printf("negative even");
    }

    else if (a >0 && a % 2 != 0)
    {
        printf("positive odd");
    }

    else if (a > 0 && a % 2 == 0)
    {
        printf("positive even");
    }
}