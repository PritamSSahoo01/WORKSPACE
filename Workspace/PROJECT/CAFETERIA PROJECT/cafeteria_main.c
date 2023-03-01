#include <stdio.h>
int breakfast();
int lunch();
int snacks();
int dinner();
// int bill(int,int,int,int);

int main()
{

    printf("WELCOME TO THE SDIB CAFETERIA!!!!!!!!");
    main:
    printf("\nCHOOSE YOUR FOOD SECTION");
    printf("\n1.BREAKFAST\n2.LUNCH\n3.SNACKS\n4.DINNER\n");
    int e;
    int a;
    scanf("%d", &a);
    if (a == 1)
    {
        e = breakfast();
    }
    else if (a == 2)
    {
        e = lunch();
    }
    else if (a == 3)
    {
        e= snacks();
    }
    else if (a == 4)
    {
        e = dinner();
    }
    else
    {
        printf("\nChoose a valid option");
    }

    printf("\nYOUR TOTAL AMOUNT IS:%d",e);
    char ch;
    printf("\nDO YOU WANT TO CONTINUE PRESS y OR n:");
    scanf("%s",&ch);
    if (ch=='y')
    {
        goto main;
    }
    else{
        printf("\nthanks for visiting");
    }
}
