#include <stdio.h>
int main()
{
    char string1[50], substring1[50];
    int p, n ,i;
    printf("Input the string : ");
    gets(string1);

    printf("Position", p);
    scanf("%d", &p);

    printf("length", n);
    scanf("%d", &n);

    for ( i = 0; i <= n; i++)
    {
        substring1[i] = string1[p + i - 1];
    }
    substring1[i]='\0';

    printf(" substring is %s", substring1);
}
