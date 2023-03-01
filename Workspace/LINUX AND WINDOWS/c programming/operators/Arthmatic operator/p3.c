/*THIS PROGRAM EXPLAINS ABOUT THE SWAPPING OF TWO NUMBER WITHOUT USING THIRD VARIABLE*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("enter the 2 number:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("before swapping the values are %d and %d \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swapping the values are %d and %d", a, b);
}