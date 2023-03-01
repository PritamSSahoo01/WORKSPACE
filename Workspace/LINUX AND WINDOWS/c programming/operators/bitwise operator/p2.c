
#include<stdio.h>
int main()
{
    int j, a, b;
    printf("enter the number:");
    scanf("%d",&a);
    for (int i = 7; i >= 0; i--)
    {
        j = (a >> i) & 0x1;
        if (i == 3 && j == 1)
        {
            printf("Status of third bit:%d", j);
            printf("\nON");
        }
        else if (i == 3 && j == 0)
        {
            printf("Status of third bit:%d", j);
            printf("\nOFF");
        }
    }
}