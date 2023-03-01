#include<stdio.h>
#include<string.h>
#define MAX 2

struct employee
{
    int empid;
    float empsal;
    char empname[10];
};
int lcd_emp_display(struct employee emp[])
{
    int i;
     for(i=0;i<MAX;i++)
    {
    printf("%d\n",emp[i].empid);
     printf("%f\n",emp[i].empsal);
      printf("%s\n",emp[i].empname);
    }
}

int main()
{
    int i;
    struct employee emp[MAX]={{1,50000,"Pritam"},{2,100000,"Swadhin"}};
    lcd_emp_display(emp);
    
    


    /*for(i=0;i<MAX;i++)
    {
    printf("%d\n",emp[i].empid);
     printf("%f\n",emp[i].empsal);
      printf("%s\n",emp[i].empname);
    }*/
     
}