#include <stdio.h>

int main()
{
    int mon, tue,wed;
    printf("enter the monday temperature:");
    scanf("%d", &mon);
    printf("\nenter the tuesday temperature:");
    scanf("%d", &tue);
    printf("\nenter the wednesday temperature:");
    scanf("%d", &wed);

    if(wed==mon)
    {
        printf("\ntemperature of wednesday is same as monday");
    }
    else if(wed==tue)
    {
        printf("\ntemperature of wednesday is same as tuesday");
    }
    else{
        printf("\ntemperature of wednesday does not match previously");
    }

}