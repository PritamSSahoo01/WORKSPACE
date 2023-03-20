#include <stdio.h>

int main()
{
    int a, b, cho;
    enum
    {
        add,
        sub,
        mul,
        div,
        square
    };
    printf("Menu\n");
    printf("0.Add\n1.sub\n2.mul\n3.div\n4.square\n");
    printf("Enter your choice:");
    scanf("%d", &cho);
    printf("Enter any two number:");
    scanf("%d%d", &a, &b);
    switch (cho)
    {
    case add:
        printf("the addition of the two number is:%d", a + b);
        break;
    case sub:
        printf("the subtraction of two number is:%d", a - b);
        break;
    case mul:
        printf("the multiplication of two number is:%d", a * b);
        break;
    case div:
        printf("the division of two number is:%d", a / b);
        break;
    case square:
        printf("the square of two number is:%d %d", a * a, b * b);
        break;
    default:
        printf("enter the correct option@@@@@@");
    }
}