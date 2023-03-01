#include <stdio.h>

int studentmarks1(int);
int studentmarks2(int);
int studentmarks3(int);
int studentmarks4(int);
int studentmarks5(int);

int main()
{
    int sic,roll;
    printf("WELCOME!!\n");
    printf("YOU HAVE ENTERED TO THE STUDENT CREDENTIALS!!!!!\n");
    printf("HELLO!!!!..........PRITAM SRICHANDAN SAHOO\n");
    printf("Enter your SIC number:");
    scanf("%d",&sic);
    printf("Enter your roll number:");
    scanf("%d",&roll);
    printf("your sic number is:%d",sic);
    printf("your roll number is:%d",roll);
    int phy, chem, math, eng, bio;
    printf("\nENTER THE MARKS OF PHYSICS:");
    printf("\n...............................\n");
    scanf("%d", &phy);
    printf("\nENTER THE MARKS OF CHEMISTRY:");
    printf("\n...............................\n");
    scanf("%d", &chem);
    printf("\nENTER THE MARKS OF MATHMATICS:");
    printf("\n...............................\n");
    scanf("%d", &math);
    printf("\nENTER THE MARKS OF ENGLISH:");
    printf("\n...............................\n");
    scanf("%d", &eng);
    printf("\nENTER THE MARKS OF BIOLOGY:");
    printf("\n...............................\n");
    scanf("%d", &bio);
    printf("\nMark and grade of PHYSICS IS:%d\n",phy,studentmarks1(phy));
    printf("\n...............................");
    printf("\nMark and grade of CHEMISTRY IS:%d\n", chem,studentmarks2(chem));
    printf("\n...............................");
    printf("\nMark and grade of MATHMATICS IS:%d\n", math,studentmarks3(math));
    printf("\n...............................");
    printf("\nMark and grade of ENGLISH IS:%d\n",eng, studentmarks4(eng));
    printf("\n...............................");
    printf("\nMark and grade of BIOLOGY IS:%d\n",bio, studentmarks5(bio));
}
