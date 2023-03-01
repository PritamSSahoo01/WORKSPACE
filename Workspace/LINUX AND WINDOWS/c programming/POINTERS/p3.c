#include <stdio.h>
int swap(int *, int *);

int main()
{
    int a, b;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("Before swapping the values are %d and %d", a, b);
    swap(&a, &b);
    printf("\nafter swapping the values are %d and %d", a, b);
}
int swap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    return *x, *y;
}
