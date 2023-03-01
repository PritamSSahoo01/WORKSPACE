#include<stdio.h>
#define CANDIDATE1 "BJP"
#define CANDIDATE2 "BJD"
#define CANDIDATE3 "CONGRESS"
#define CANDIDATE4 "APP"
void castvote(int votescount1,int votescount2,int votescount3,int votescount4)
{
    int choice;
    printf("### Please choose your PARTY ####\n");
    printf("1. %s\n", CANDIDATE1);
    printf("2. %s\n", CANDIDATE2);
    printf("3. %s\n", CANDIDATE3);
    printf("4. %s\n", CANDIDATE4);

    printf("Input your choice (1 - 4) :\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        votescount1++;
        break;
    case 2:
        votescount2++;
        break;
    case 3:
        votescount3++;
        break;
    case 4:
        votescount4++;
        break;
    default:
        printf("Error: Wrong Choice !! Please retry");
        // hold the screen
        getchar();
    }
    printf("thanks for vote !!");
    //return votescount1,votescount2,votescount3,votescount4;
}