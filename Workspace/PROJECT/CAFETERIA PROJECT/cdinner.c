#include<stdio.h>

int dinner()
{
    int b,c1,sum;
    printf("YOU HAVE ENTERED TO THE BREAKFAST SECTION");
    printf("\nSELECT YOUR FAV DISH");
    printf("\n1.Cauliflower Potato Curry\n2.Chana Dal Curry\n3.Cabbage & green muttor\n4.Fried rice\n5.Santula\n6.Veg biriyani");
    printf("\nEnter your choice");
    scanf("%d",&b);
    printf("\nEnter your amount");
    scanf("%d",&c1);
    switch(b)
    {
        case 1:
        //int c1,sum;
        printf("YOU have choosen Cauliflower Potato Curry as your dish");
        printf("\nCauliflower Potato Curry per piece is rs35");
        //printf("\nEnter your amount");
        //scanf("%d",&c1);
        sum=c1*35;
        return sum;
        break;
        case 2:
        //int c1,sum2;
        printf("YOU have choosen Chana Dal Curry as your dish");
        printf("\nChana Dal Curry per piece is rs45");
        //printf("\nEnter your amount");
        //scanf("%d",&c2);
        sum=c1*45;
        return sum;
        break;
        case 3:
        //int c3,sum3;
        printf("YOU have choosen Cabbage & green muttor as your dish");
        printf("\nCabbage & green muttor per piece is rs65");
        //printf("\nEnter your amount");
       // scanf("%d",&c3);
        sum=c1*65;
        return sum;
        break;
        case 4:
        //int c4,sum4;
        printf("YOU have choosen Fried rice as your dish");
        printf("\nChakuli per Fried rice is rs55");
        //printf("\nEnter your amount");
        //scanf("%d",&c4);
        sum=c1*55;
        return sum;
        break;
        case 5:
        //int c5,sum5;
        printf("YOU have choosen Santula as your drink");
        printf("\nSantula per piece is rs50");
        //printf("\nEnter your amount");
        //scanf("%d",&c5);
        sum=c1*50;
        return sum;
        break;
        case 6:
        //int c6,sum6;
        printf("YOU have choosen Veg biriyani as your dish");
        printf("\nVeg biriyani per piece is rs65");
        //printf("\nEnter your amount");
        //scanf("%d",&c6);
        sum=c1*65;
        return sum;
        break;
    }


}