#include<stdio.h>
#include"math.h"

int power(int,int);

int main()
{
    int num,y,res;
    printf("enter the number for x:");
    scanf("%d",&num);
    printf("enter the number for y:");
    scanf("%d",&y);
    res=power(num,y);
    printf("POWER OF THE NUMBER IS:%d",res);

}
int power(int x,int y)
{
    int res;
    res=pow(x,y);
    return res;
}