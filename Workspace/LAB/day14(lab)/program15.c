#include<stdio.h>

int main()
{
    struct alphabets
    {
        char firstLetter;
        struct alphabets a;
    }al;
    al.firstletter ='a';
    printf("%c",al.firstLetter);
}
