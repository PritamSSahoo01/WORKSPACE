#include<stdio.h>

#define MAX 128

int main()
{
    char arr[MAX+1]={'a','b'};
    int i;
    for (i=0;i<=MAX-1;i++)
    {
        //printf("Enter the value for %d",i+1);
        printf("%c\t",arr[i]);
    }
}