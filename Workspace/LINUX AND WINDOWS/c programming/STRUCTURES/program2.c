#include <stdio.h>

int main()
{
    int a;
    printf("%x", &a);
    int *c=&a;
    if (*c % sizeof(a) == 0)
    {
        printf("\nALIGHNMENT");
    }
    else
    {
        printf("\nunalighnment");
    }
}