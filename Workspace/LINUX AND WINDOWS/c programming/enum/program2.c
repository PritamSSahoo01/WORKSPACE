#include <stdio.h>

int main()
{
    int  cho;
    enum
    {
        M800=34,
        Audi=45,
        BMW=90,
        kia=23,
        Tata=67
    };
    printf("Menu\n");
    printf("0. M800\n1.Audi\n2.BMW\n3.kia\n4.Tata\n");
    printf("Enter your choice:");
    scanf("%d", &cho);
    
    switch (cho)
    {
    case 0:
        printf("the mileage of M800 car is:%d",M800);
        break;
    case 1:
        printf("the mileage of Audi car is:%d",Audi);
        break;
    case 2:
        printf("the mileage of BMW car is:%d",BMW);
        break;
    case 3:
        printf("the mileage of kia car is:%d",kia);
        break;
    case 4:
        printf("the mileage of Tata car is:%d",Tata);
        break;
    default:
        printf("enter the correct option@@@@@@");
    }
}