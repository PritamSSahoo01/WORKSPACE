#include <stdio.h>
#include <string.h>
#define MAX 2

struct employee
{
    int empid;
    float empsal;
    char empname[10];
};

int main()
{
    int i;
    struct employee emp[MAX];

    //printf("input the values:");
    for(i=0;i<MAX;i++)
    {
    printf("input values for emp%d:",i);
    scanf("%d", &emp[i].empid);
    scanf("%f", &emp[i].empsal);
    scanf("%s", emp[i].empname);
    }
    for(i=0;i<MAX;i++)
    {

    printf("the employee id is:%d\n",emp[i].empid);
    printf("the employee salary is:%f\n",emp[i].empsal);
    printf("the employee id is:%s\n",emp[i].empname);
    }
}