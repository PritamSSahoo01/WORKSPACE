#include<stdio.h>
#include<string.h>

int main()
{
    int s[50];
    printf("enter the string :");
    fgets(s,sizeof(s),stdin);
    //scanf("%s",s);
    //gets(s);
    printf("the string you entered is:%s",s);
}