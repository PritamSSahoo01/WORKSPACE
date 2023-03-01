#include <stdio.h>
int main()
{
    char string1[50], substring1[50];
    int p, n ,i;
    printf("Input the string : ");
    gets(string1);
    printf("Word to be searched: ");
    gets(substring1);

    printf("", p);
    scanf("%d", &p);

    for ( i = 0; i <= n; i++)
    {
        if(substring1[i]==string1[i])
        {
            printf("Found");
        }
        else{
            printf("Word not found");
        }
    }
}