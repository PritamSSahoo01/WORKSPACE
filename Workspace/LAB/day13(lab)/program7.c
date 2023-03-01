#include<stdio.h>

int find_greatest(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else{
        return y;
    }
}
int main()
{
    int a,b;
    int res;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    int (*func)(int,int);
    func=&find_greatest;
    res=(*func)(a,b);
    printf("the greatest number is:%d",res);

}