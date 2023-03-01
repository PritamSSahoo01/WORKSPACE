#include <stdio.h>

int main()
{
    int eid, twh, arph;
    float sal;
    printf("Input the Employees id (Max.10 chars):");
    scanf("%d", &eid);
    printf("\nInput the working hrs:");
    scanf("%d", &twh);
    printf("Salary amount/hr:");
    scanf("%d", &arph);

    sal = twh*arph;

    printf("Employees ID = %d\n",eid);
    printf("Salary=U$%.2f",sal);
}