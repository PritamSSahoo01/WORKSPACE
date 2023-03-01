#include<stdio.h>

int main()
{
    int dis,sf;
    float con;
    printf("Input total distance in km:\n");
    scanf("%d",&dis);
    printf("Input total fuel spent in liters:\n");
    scanf("%d",&sf);
    con=dis/sf;
    printf("Average Consumption(km/lt)%.2f",con);


}