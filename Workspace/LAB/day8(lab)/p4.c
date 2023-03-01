#include <stdio.h>
void cube1();
int cube2(int);
int cube3();
void cube4(int);


int main()
{
    int a,d,e;
    printf("enter the number:");
    scanf("%d",&a);
    cube1();
    d=cube2(a);
    printf("\nCube of a number is:%d",d);
    e=cube3();
    printf("\nCube of a number is:%d",e);
    cube4(a);
}
void cube1()
{
    int a,res;
    printf("enter the number:");
    scanf("%d",&a);
    res=a*a*a;
    printf("\ncube of the number is:%d",res);
}
int cube2(int a)
{
    int res;
    res=a*a*a;
}
int cube3()
{
    int a,res;
    printf("enter the number:");
    scanf("%d",&a);
    res=a*a*a;
    return res;
    //printf("cube of the number is:%d",res);
}
void cube4(int a)
{
    int res;
    printf("enter the number:");
    scanf("%d",&a);
    res=a*a*a;
    printf("\nresult:%d",res);
   
    
}