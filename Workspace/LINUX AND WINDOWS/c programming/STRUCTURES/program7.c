#include<stdio.h>
#include<string.h>
#define MAX 2

struct employee
{
    int empid;
    float empsal;
    char empname[10];
};
int lcd_emp_write(struct employee emp[])
{
    int i;
    for(i=0;i<MAX;i++)
    {
    printf("input values for emp%d:",i);
    scanf("%d", &emp[i].empid);
    scanf("%f", &emp[i].empsal);
    scanf("%s", emp[i].empname);
    }
}
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
    struct employee emp[MAX];
    lcd_emp_display(emp);
    lcd_emp_write(emp);   
}