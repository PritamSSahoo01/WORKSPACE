#include <stdio.h>

int main()
{
    char ch;
    printf("enter the character:\n");
    scanf("%c", &ch);
    if (ch== 'a' || ch == 'A')
    {
        printf("Vowel");
    }
    else if (ch=='e' || ch == 'E')
    {
        printf("Vowel");
    }
    else if (ch=='i'||ch=='I')
    {
        printf("Vowel");
    }

    else if (ch=='o' ||ch=='O')
    {
        printf("vowel");
    }

    else if (ch='u' || ch=='U')
    {
        printf("vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}