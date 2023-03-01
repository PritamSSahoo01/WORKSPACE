#include <stdio.h>

int main()
{
    int num,count=2,i;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=2;i<=num-1;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("prime");
    }
    else{
        printf("not prime");
    }
    

}