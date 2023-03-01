#include <stdio.h>

int main()
{
    int amount, b_100, b_50, b_20, b_10, b_5, b_2, b_1;
    printf("Input the amount:");
    scanf("%d", &amount);
    b_100 = amount / 100;
    amount = amount % 100;
    b_50 = amount / 50;
    amount = amount % 50;
    b_20 = amount / 20;
    amount = amount % 20;
    b_10 = amount / 10;
    amount = amount % 10;
    b_5 = amount / 5;
    amount = amount % 5;
    b_2 = amount / 2;
    amount = amount % 2;
    b_1 = amount / 1;

    printf("%d Note(s) of 100.00", b_100);
    printf("\n%d  Note(s) of 50.00", b_50);
    printf("\n%d Note(s) of 20.00", b_20);
    printf("\n%d Note(s) of 10.00", b_10);
    printf("\n%d Note(s) of 5.00", b_5);
    printf("\n%d Note(s) of 2.00", b_2);
    printf("\n%d Note(s) of 1.00", b_1);
    return 0;
}