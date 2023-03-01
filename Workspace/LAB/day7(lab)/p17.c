#include <stdio.h>

int main()
{
    int num, rev = 0, temp,o;
    printf("Enter the number:");
    scanf("%d", &num);
    o=num;
    while (num != 0)
    {
        temp = num % 10;
        rev = rev * 10 + temp;
        num = num / 10;
    }
    if (o == rev)
    {
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
}