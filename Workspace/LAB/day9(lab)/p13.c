#include<stdio.h>
int check(int);

int main()
{
    int a;
    printf("Enter the number to check:");
    scanf("%d",&a);
    check(a);
}
int check(int a)
{
    if(a%2==0)
    {
        printf("THE ENTERED NUMBER IS EVEN");
    }
    else{
        printf("THE ENTERED NUMBER IS ODD");
    }
}
