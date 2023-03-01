#include <stdio.h>
int add(int, int);
int sub(int, int);
int div(int, int);
int mul(int, int);

int main()
{
    int a, b, c, d, e, f;
    printf("enter the values of a and b:");
    scanf("%d %d", &a, &b);
    c = add(a, b);
    printf("addition:%d", c);
    d = sub(a, b);
    printf("\nsubtraction:%d", d);
    e = mul(a, b);
    printf("\nmultiplication:%d", e);
    f = div(a, b);
    printf("\nDivision:%d", f);
}
int add(int a, int b)
{

    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
