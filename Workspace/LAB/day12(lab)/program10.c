#include <stdio.h>

int main()
{
    int a[] = {3, 2, 5, 0, 31, 45, 7, 67, 9};
    int *p, *q;
    p = a;
    q = &a[0] + 3;
    printf("%u %u %u\n", (*p)++, (*p)++, *(++p));
    printf("%d\n", *p);
    printf("%d", (*p)++);0
    printf("%d", (*p)++);
    q--;
    printf("%d", (*q + 2)--);
    printf("%d", (*p + 2) - 2);
    printf("%d", (*p++ - 2) - 1);
}