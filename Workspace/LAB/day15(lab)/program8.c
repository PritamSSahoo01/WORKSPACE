#include <stdio.h>
int main()
{
    char c[50], i = 0, count1 = 0, count2 = 0, count3 = 0;
    printf("input the string:");
    gets(c);
    while (c[i] != '\0')
    {
        if ((c[i] >= 65 && c[i] <= 90) || (c[i] >= 97 && c[i] <= 122))
        {
            count1++;
        }
        else if (c[i] >= 48 && c[i] <= 57)
        {
            count2++;
        }
        else
        {
            count3++;
        }
        i++;
    }
    printf("\nNumber of alphabets in the string is:%d", count1);
    printf("\nNumber of special charater in the string is:%d", count2);
    printf("\nNumber of number in the string is:%d", count3);
}