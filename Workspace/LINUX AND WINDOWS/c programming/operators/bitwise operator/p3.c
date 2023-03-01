#include<stdio.h>
int main()
{
    int j, a, b;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the position of the bit to chnage:");
    scanf("%d",&b);
    for (int i = 7; i >= 0; i--)
    {
        j = (a >> i) & 0x1;
        printf("%d",j);
    }
     printf("\n%d",j);
}