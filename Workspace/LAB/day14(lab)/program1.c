#include<stdio.h>
int main()
{
    struct simp
    {
        int i=6;
        char city[]="CHENNAI";
    }
    struct simp s1;
    printf("%d",s1.city);
    printf("%d",s1.i);
    return 0;
}