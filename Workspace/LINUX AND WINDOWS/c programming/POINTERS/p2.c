#include <stdio.h>

int add(int *, int *);
int sub(int *, int *);
int mul(int *, int *);
int div(int *, int *);
int mod(int *, int *);

int main()
{
    int a, b;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("\nAddition of two number is:%d", add(&a, &b));
    printf("\nsubtraction of two number is:%d", sub(&a, &b));
    printf("\nmultiplication of two number is:%d", mul(&a, &b));
    printf("\ndivision of two number is:%d", div(&a, &b));
    printf("\nmodulo of two number is:%d", mod(&a, &b));
}
int add(int *x, int *y)
{
    return *x + *y;
}
int sub(int *x, int *y)
{
    return *x - *y;
}
int mul(int *x, int *y)
{
    return *x * *y;
}
int div(int *x, int *y)
{
    return *x / *y;
}
int mod(int *x, int *y)
{
    return *x % *y;
}