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
    struct employee emp1;

    printf("input the values:");

    scanf("%d", &emp1.empid);
    scanf("%f", &emp1.empsal);
    scanf("%s", emp1.empname);

    printf("the employee id is:%d\n",emp1.empid);
    printf("the employee salary is:%f\n",emp1.empsal);
    printf("the employee id is:%s\n",emp1.empname);
}