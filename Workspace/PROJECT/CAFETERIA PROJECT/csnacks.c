#include<stdio.h>

int snacks()
{
    int b,c1,sum;
    printf("YOU HAVE ENTERED TO THE Snacks SECTION");
    printf("\nSELECT YOUR FAV DISH");
    printf("\n1.Aloo chop\n2.Samosha\n3.Nimki\n4.Cream cake\n5.TEA\n6.Biscuit");
    printf("\nEnter your choice");
    scanf("%d",&b);
    printf("\nEnter your amount");
    scanf("%d",&c1);
    switch(b)
    {
        case 1:
        //int c1,sum;
        printf("YOU have choosen Aloo chop as your dish");
        printf("\nAloo chop per piece is rs5");
        //printf("\nEnter your amount");
        //scanf("%d",&c1);
        sum=c1*5;
        return sum;
        break;
        case 2:
        //int c1,sum2;
        printf("YOU have choosen Samosha as your dish");
        printf("\nSamosha per piece is rs10");
        //printf("\nEnter your amount");
        //scanf("%d",&c2);
        sum=c1*10;
        return sum;
        break;
        case 3:
        //int c3,sum3;
        printf("YOU have choosen Nimki as your dish");
        printf("\nNimki per piece is rs15");
        //printf("\nEnter your amount");
       // scanf("%d",&c3);
        sum=c1*15;
        return sum;
        break;
        case 4:
        //int c4,sum4;
        printf("YOU have choosen Cream cake as your dish");
        printf("\nCream cake per piece is rs10");
        //printf("\nEnter your amount");
        //scanf("%d",&c4);
        sum=c1*10;
        return sum;
        break;
        case 5:
        //int c5,sum5;
        printf("YOU have choosen Tea as your drink");
        printf("\nTea per piece is rs5");
        //printf("\nEnter your amount");
        //scanf("%d",&c5);
        sum=c1*5;
        return sum;
        break;
        case 6:
        //int c6,sum6;
        printf("YOU have choosen Biscuit as your dish");
        printf("\nBiscuit per piece is rs6");
        //printf("\nEnter your amount");
        //scanf("%d",&c6);
        sum=c1*6;
        return sum;
        break;
    }


}