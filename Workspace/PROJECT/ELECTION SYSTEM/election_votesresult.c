#include<stdio.h>
void votesResult(int votescount1,int votescount2,int votescount3,int votescount4)
{
    int r1, r2, r3, r4;
    if (votescount1 == 0 && votescount2 == 0 && votescount3 == 0 && votescount4 == 0)
    {
        printf("\n**********NO VOTES YET*********PLEASE VOTE TO START THE VOTING******");
    }
    else if (votescount1 > votescount2 && votescount1 > votescount3 && votescount1 > votescount4)
    {
        r1 = votescount1 - votescount2;
        r2 = votescount1 - votescount3;
        r3 = votescount1 - votescount4;
        printf("---------------***********------------------");
        printf("***************CONGRATULATIONS***************\n");
        printf("THE TOTAL NO.OF VOTES OF --BJP--IS HIGHEST BY:%d\n", votescount1);
        printf("---------------***********------------------\n");
        printf("THE TOTAL NO.OF VOTES OF --BJD--:%d AND LOOSE BY:%d\n", votescount2, r1);
        printf("---------------***********------------------\n");
        printf("THE TOTAL NO.OF VOTES OF --CONGRESS--:%d AND LOOSE BY:%d\n", votescount3, r2);
        printf("---------------***********------------------\n");
        printf("THE TOTAL NO.OF VOTES OF --APP--:%d AND LOOSE BY:%d\n", votescount4, r3);
        printf("---------------***********------------------\n");
    }
    else if (votescount2 > votescount1 && votescount2 > votescount3 && votescount2 > votescount4)
    {
        r1 = votescount2 - votescount1;
        r2 = votescount2 - votescount3;
        r3 = votescount2 - votescount4;
        printf("---------------***********------------------\n");
        printf("THE TOTAL NO.OF VOTES OF --BJD--IS HIGHEST BY:%d\n", votescount2);
        printf("---------------***********------------------\n");
        printf("THE TOTAL NO.OF VOTES OF --BJP--:%d AND LOOSE BY:%d\n", votescount1, r1);
        printf("---------------***********------------------\n");
        printf("THE TOTAL NO.OF VOTES OF --CONGRESS--:%d AND LOOSE BY:%d\n", votescount3, r2);
        printf("---------------***********------------------\n");
        printf("THE TOTAL NO.OF VOTES OF --APP--:%d AND LOOSE BY:%d\n", votescount4, r3);
        printf("---------------***********------------------\n");
    }
    else if (votescount3 > votescount1 && votescount3 > votescount2 && votescount3 > votescount4)
    {
        r1 = votescount3 - votescount1;
        r2 = votescount3 - votescount2;
        r3 = votescount3 - votescount4;
        printf("---------------***********------------------\n");
        printf("THE TOTAL NO.OF VOTES OF --CONGRESS--IS HIGHEST BY:%d\n", votescount3);
        printf("---------------***********------------------\n");
        printf("THE TOTAL NO.OF VOTES OF --BJP--:%d AND LOOSE BY:%d\n", votescount1, r1);
        printf("---------------***********------------------\n");
        printf("THE TOTAL NO.OF VOTES OF --BJD--:%d AND LOOSE BY:%d\n", votescount2, r2);
        printf("---------------***********------------------\n");
        printf("THE TOTAL NO.OF VOTES OF --APP--:%d AND LOOSE BY:%d\n", votescount4, r3);
        printf("---------------***********------------------\n");
    }
    else if (votescount4 > votescount1 && votescount4 > votescount2 && votescount4 > votescount3)
    {
        r1 = votescount4 - votescount1;
        r2 = votescount4 - votescount2;
        r3 = votescount4 - votescount3;
        printf("---------------***********------------------\n");
        printf("THE TOTAL NO.OF VOTES OF --APP--IS HIGHEST BY:%d\n", votescount1);
        printf("---------------***********------------------\n");
        printf("THE TOTAL NO.OF VOTES OF --BJP--:%d AND LOOSE BY:%d\n", votescount1, r1);
        printf("---------------***********------------------\n");
        printf("THE TOTAL NO.OF VOTES OF --BJD--:%d AND LOOSE BY:%d\n", votescount2, r2);
        printf("---------------***********------------------\n");
        printf("THE TOTAL NO.OF VOTES OF --CONGRESS--:%d AND LOOSE BY:%d\n", votescount3, r3);
        printf("---------------***********------------------\n");
    }
    else if(votescount1==votescount2==votescount3==votescount4)
    {
        printf("\n****************ELECTION IS TIE**********************");
    }
}