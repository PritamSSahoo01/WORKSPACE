#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char s[500]={"$,G,P,G,G,A,1,8,1,9,0,8,.,0,0,3,4,0,4,.,7,0,4,1,7,7,8,N07044.396270W4131.00495.144M,2,9,.,2,0,0,M,0,.,1,0,0,0,0,0,*,4,0"};
    printf("longitue:");
    for(i=55;i<=66;i++)
    {
        printf("%c",s[i]);
    }
    printf("\n");
    printf("lattitude:");
    for(i=68;i<=81;i++)
    {
        printf("%c",s[i]);
    }
}