#include <stdio.h>
#include <string.h>
#include<stdlib.h>

struct Gender
{
    char gender[50];
} stdgen;

struct student
{
    int std_id;
    int std_phn_no;
    char std_name[100];
    char std_grade[20];
    struct Gender stdgen;
};
void display(struct student stu[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nenter student%d ID, NAME, PHONE NUMBER, GENDER and GRADE respectively\n", i + 1);
        printf("\n--------------------------------------------------\n");
        scanf("\n%d\n%s\n%x\n%s\n%s", &stu[i].std_id, stu[i].std_name, &stu[i].std_phn_no, stu[i].stdgen.gender, stu[i].std_grade);
        
    }
    printf("\n");
    printf("\n****************DETAILS ARE SHOWN BELOW******************\n");
    printf("\n");
    printf("\nSL NO \tSTUDENT ID\tSTUDENT NAME  \tPHONE NUMBER \t      GENDER \t      GRADE\n");
    printf("\n----------------X------------------------------------------------X-------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d \t %d  \t\t %s  \t %x  \t %s  \t %s\n", i + 1, stu[i].std_id, stu[i].std_name, stu[i].std_phn_no, stu[i].stdgen.gender, stu[i].std_grade);
        printf("\n-------------------------------------------------------------------------------\n");
    }
}
int main()
{
    int n;
    printf("\n********************STUDENT DETAILS************************");
    printf("\n----X----------------X-----------X--------------");
    printf("\nENTER THE NO.OF STUDENT RECORD YOU WANT:");
    scanf("%d",&n);
    struct student stu[n];
    display(stu, n);
}