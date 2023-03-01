#include<stdio.h>
#define CANDIDATE1 "BJP"
#define CANDIDATE2 "BJD"
#define CANDIDATE3 "CONGRESS"
#define CANDIDATE4 "APP"
void votesCount(int votescount1,int votescount2,int votescount3,int votescount4)
{
    printf("##### Voting Statics ####\n");
    printf("%s - %d\n ", CANDIDATE1, votescount1);
    printf("%s - %d\n ", CANDIDATE2, votescount2);
    printf("%s - %d \n", CANDIDATE3, votescount3);
    printf("%s - %d \n", CANDIDATE4, votescount4);
}