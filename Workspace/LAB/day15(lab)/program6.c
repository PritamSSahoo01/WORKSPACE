#include<stdio.h>
#include<string.h>

int main()
{
    char s[50],i=0,count=0;
    printf("Input the string:");
    gets(s);
    while(s[i]!='\0' )
    {
        if(s[i]==' ')
        {
        count=count+1;
        }
        i++;
    }
    printf("total no of words in the string is:%d",count+1);

}