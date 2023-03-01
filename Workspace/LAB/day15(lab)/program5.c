#include<stdio.h>
#include<string.h>

int main()
{
    char s[50],i,len;
    //len=strlen(s);
    
    printf("Input the string:");

    gets(s);
    len=strlen(s);
    printf("lenth:%d",len);
    printf("the characters of the string in the reverse are:");
    for(i=len;i>=0;i--)
    {
        printf("%c ",s[i]);
    }
}