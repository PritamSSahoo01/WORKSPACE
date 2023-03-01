#include<stdio.h>
#include<string.h>

struct employee
{
    int empid;
    float empsal;
    char empname[10];
};

int main()
{
    struct employee emp1={10,50000,"Alex"};

    /*emp1.empid=3421;
    emp2.empsal=10000.321;
    strcpy(emp3.empname,"pritam");*/

    printf("%d\n",emp1.empid);
     printf("%f\n",emp1.empsal);
      printf("%s\n",emp1.empname);
      //printf("%d",sizeof(employee));
}