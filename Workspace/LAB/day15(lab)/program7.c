#include<stdio.h>
int main()
{
    char s[50],a[50],i,count1=0,count2=0;
    printf("input the first string:");
    gets(s);
    printf("input the second string:");
    gets(a);
    printf("String1:");
    for(i=0;s[i]!='\0';i++)
    {
        printf("%c",s[i]);
    }
    printf("\nString2:");
    for(i=0;s[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }

    for(i=0;s[i]!='\0';i++)
    {
        count1++;
    }
    for(i=0;a[i]!='\0';i++)
    {
        count2++;
    }
    printf("\nlength of the string1 is:%d",count1);
    printf("\nlength of the string2 is:%d",count2);
    if(count1==count2)
    {
        printf("\nStrings are equal");
    }
    else{
        printf("\nStrings are not equal");
    }

}