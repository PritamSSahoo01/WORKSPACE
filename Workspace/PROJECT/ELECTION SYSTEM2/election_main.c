#include <stdio.h>
#include <string.h>


#define CANDIDATE1 "BJP"
#define CANDIDATE2 "BJD"
#define CANDIDATE3 "CONGRESS"
#define CANDIDATE4 "AAP"
int votescount1 = 0, votescount2 = 0, votescount3 = 0, votescount4 = 0;
void castvote()
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
}
void votesCount()
{
    printf("##### Voting Statics ####\n");
    printf("%s - %d\n ", CANDIDATE1, votescount1);
    printf("%s - %d\n ", CANDIDATE2, votescount2);
    printf("%s - %d \n", CANDIDATE3, votescount3);
    printf("%s - %d \n", CANDIDATE4, votescount4);
}
void votesResult()
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
int main()
{
    // int i;
    int choice, totalvote;
    char reg[50];
    printf("###### Welcome to Election/REGION--ODISHA/VOTING 2023 #####\n");
    printf("------------------Enter the region you want to cast vote--------------");
    gets(reg);
    printf("The region you have choosen is-------------%s", reg);
    do
    {
        printf("\n1. Cast the Vote");
        printf("\n2. Find Vote Count");
        printf("\n3. Result of vote");
        printf("\n0. Exit");
        printf("\nPlease enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            castvote();
            break;
        case 2:
            votesCount();
            break;
        case 3:
            votesResult();
            break;
        default:
            totalvote = votescount1 + votescount2 + votescount3 + votescount4;
            printf("Total vote of the region %s is %d\n", reg, totalvote);
            printf("***************Thank you for voting******************");
        }

    } while (choice != 0);
    // hold the screen
    getchar();
    return 0;
}