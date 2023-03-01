#include<stdio.h>

int main()
{
    int nodays,y,m,d;
    printf("Input no.of days:");
    scanf("%d",&nodays);
    y=nodays/365;
    m=(nodays%365)/30;
    d=(nodays%365)%30;
    printf("%d Year(s)",y);
    printf("\n%d Month(s)",m);
    printf("\n%d Day(s)",d);
}