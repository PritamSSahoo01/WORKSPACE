#include<stdio.h>

int breakfast()
{
    int b,c1,sum;
    printf("YOU HAVE ENTERED TO THE BREAKFAST SECTION");
    printf("\nSELECT YOUR FAV DISH");
    printf("\n1.IDLI\n2.PARATHA\n3.BARA\n4.CHAKULI\n5.TEA\n6.UPAMA");
    printf("\nEnter your choice");
    scanf("%d",&b);
    printf("\nEnter your amount");
    scanf("%d",&c1);
    switch(b)
    {
        case 1:
        //int c1,sum;
        printf("YOU have choosen idli as your dish");
        printf("\nIdli per piece is rs5");
        //printf("\nEnter your amount");
        //scanf("%d",&c1);
        sum=c1*5;
        return sum;
        break;
        case 2:
        //int c1,sum2;
        printf("YOU have choosen Paratha as your dish");
        printf("\nParatha per piece is rs8");
        //printf("\nEnter your amount");
        //scanf("%d",&c2);
        sum=c1*8;
        return sum;
        break;
        case 3:
        //int c3,sum3;
        printf("YOU have choosen bara as your dish");
        printf("\nBara per piece is rs5");
        //printf("\nEnter your amount");
       // scanf("%d",&c3);
        sum=c1*5;
        return sum;
        break;
        case 4:
        //int c4,sum4;
        printf("YOU have choosen Chakuli as your dish");
        printf("\nChakuli per piece is rs6");
        //printf("\nEnter your amount");
        //scanf("%d",&c4);
        sum=c1*6;
        return sum;
        break;
        case 5:
        //int c5,sum5;
        printf("YOU have choosen tea as your drink");
        printf("\nTea per piece is rs5");
        //printf("\nEnter your amount");
        //scanf("%d",&c5);
        sum=c1*5;
        return sum;
        break;
        case 6:
        //int c6,sum6;
        printf("YOU have choosen Upma as your dish");
        printf("\nUpma per piece is rs25");
        //printf("\nEnter your amount");
        //scanf("%d",&c6);
        sum=c1*25;
        return sum;
        break;
    }


}