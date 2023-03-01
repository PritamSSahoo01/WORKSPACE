#include<stdio.h>

int main()
{
    float w1,w2,ni1,ni2,avg;
    printf("weight - item1:");
    scanf("%f",&w1);
    printf("\nNo. of item1:");
    scanf("%f",&ni1);
    printf("\nweight - item2:");
    scanf("%f",&w2);
    printf("\nNo. of item2:");
    scanf("%f",&ni2);
    avg=((w1*ni1)+(w2*ni2))/(ni1+ni2);
    printf("Average Value =%f",avg);

}