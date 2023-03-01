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
    struct employee emp1={10,50000,"Alex"},*p;
    p=&emp1;

    /*p->empid;
    p->empsal;
    p->empname;*/

    /*emp1.empid=3421;
    emp2.empsal=10000.321;
    strcpy(emp3.empname,"pritam");*/

    printf("%d\n", p->empid);
     printf("%f\n",p->empsal);
      printf("%s\n",p->empname);
      //printf("%d",sizeof(employee));
}