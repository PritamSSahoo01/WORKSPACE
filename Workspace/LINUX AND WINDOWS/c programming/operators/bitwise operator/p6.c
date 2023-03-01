#include <stdio.h>

int main()
{
    int a, i, count = 0, j;
    printf("enter the number for a: ");
    scanf("%d", &a);
    printf("\nBinary form of a given number:");
    for (int i = 7; i >= 0; i--)
    {
        j = (a >> i) & 0x1;
        printf("%d", j);
        if (j == 1)
        {
            count++;
        }
    }
    printf("\n%d", count);
}