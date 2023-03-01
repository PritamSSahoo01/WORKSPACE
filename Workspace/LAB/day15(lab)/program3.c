#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    printf("enter the string:");
    gets(s);
    int i,count=0;
    for (i = 0; i < s[i]; i++)

    {
        count++;
    }
    printf("the string ypu entered is :%s",s);
    printf("\nlength of the string is:%d ",count);
}