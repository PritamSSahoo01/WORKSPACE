#include<stdio.h>

int main()
{
    int a[27];
    int *p;
    int i;
    p=&a;
    for (i=0;i<26;i++)
    {
        *p=i+'A';
        p++;
    }
    p=&a;
    printf("The alphabets are:\n");
    for(i=0;i<26;i++)
    {
        printf("%c\t",*p);
        p++;
    }
}