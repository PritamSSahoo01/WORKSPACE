#include<stdio.h>

int lunch()
{
    int b,c1,sum;
    printf("YOU HAVE ENTERED TO THE lunch SECTION");
    printf("\nSELECT YOUR FAV DISH");
    printf("\n1.Rice\n2.Dal\n3.paneer\n4.chicken curry\n5.fish curry\n6.egg curry");
    printf("\nEnter your choice");
    scanf("%d",&b);
    printf("\nEnter your amount");
    scanf("%d",&c1);
    switch(b)
    {
        case 1:
        //int c1,sum;
        printf("YOU have choosen Rice as your dish");
        printf("\nRice per piece is rs25");
        //printf("\nEnter your amount");
        //scanf("%d",&c1);
        sum=c1*25;
        return sum;
        break;
        case 2:
        //int c1,sum2;
        printf("YOU have choosen Dal as your dish");
        printf("\nDal per piece is rs10");
        //printf("\nEnter your amount");
        //scanf("%d",&c2);
        sum=c1*10;
        return sum;
        break;
        case 3:
        //int c3,sum3;
        printf("YOU have choosen Paneer as your dish");
        printf("\nPanner per piece is rs55");
        //printf("\nEnter your amount");
       // scanf("%d",&c3);
        sum=c1*55;
        return sum;
        break;
        case 4:
        //int c4,sum4;
        printf("YOU have choosen Chicken curry as your dish");
        printf("\nChicken curry per piece is rs70");
        //printf("\nEnter your amount");
        //scanf("%d",&c4);
        sum=c1*70;
        return sum;
        break;
        case 5:
        //int c5,sum5;
        printf("YOU have choosen Fish as your drink");
        printf("\nFish curry per piece is rs50");
        //printf("\nEnter your amount");
        //scanf("%d",&c5);
        sum=c1*50;
        return sum;
        break;
        case 6:
        //int c6,sum6;
        printf("YOU have choosen egg curry as your dish");
        printf("\nEgg curry per piece is rs40");
        //printf("\nEnter your amount");
        //scanf("%d",&c6);
        sum=c1*40;
        return sum;
        break;
    }


}