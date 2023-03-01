#include <stdio.h>

int main()
{
    int f1, f2, f3, f4, f5, sum;
    printf("Input the first number:\n");
    scanf("%d", &f1);
    printf("Input the second number:\n");
    scanf("%d", &f2);
    printf("Input the third number:\n");
    scanf("%d", &f3);
    printf("Input the fourth number:\n");
    scanf("%d", &f4);
    printf("Input the fifth number:\n");
    scanf("%d", &f5);

    sum = f1 + f2 + f3 + f5;

    printf("Sum of all odd values:%d", sum);
    return 0;
}