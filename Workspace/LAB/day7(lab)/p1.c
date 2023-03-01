#include <stdio.h>



int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    
    if(ch=='a' || ch=='A' ||ch=='e'|| ch=='E')
    {
        printf("VOWEL");
    }
    else if(ch=='e'|| ch=='E')
    {
        printf("VOWEL");
    }
    else if(ch=='i'|| ch=='I')
    {
        printf("VOWEL");
    }
    else if(ch=='o'|| ch=='O')
    {
        printf("VOWEL");
    }
    else if(ch=='u'|| ch=='U')
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
    return 0;
}