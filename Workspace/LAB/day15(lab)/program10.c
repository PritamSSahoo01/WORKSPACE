#include<stdio.h>
#include <string.h>
int main()
{
    char string[50];
    int k = 0, v = 0, c = 0;
    printf("Enter the string: \n");
    gets(string);
    while (string[k] != '\0')
    {
        if(string[k]=='a'||string[k]=='e'||string[k]=='i'||string[k]=='o'||string[k]=='u')
        {
            v++;
        }
        else{
            c++;
        }
        k++;
    }
    printf("Vowels: %d",v);
    printf("consonant:%d",c);
}
