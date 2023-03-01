#include <stdio.h>
int main()
{
    void *p;
    int a = 10;
    float b = 11.2;
    char ch = 'a';
    

    p = &a;
    printf("\nvalue of the in is :%d", (*(int *)p));
    p= &b;
    printf("\nvalue of the in is :%f", (*(float *)p));
    p = &ch;
    printf("\nvalue of the in is :%c", (*(char *)p));
}