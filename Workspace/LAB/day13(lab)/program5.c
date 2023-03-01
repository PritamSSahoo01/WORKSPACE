#include<stdio.h>
int swap(int *x,int *y,int *z)
{
    int num1,num2,num3,pro;
    pro=(*x)*(*y)*(*z);
    num1=pro/((*x)*(*y));
    num2=pro/((*y)*(*z));
    num3=pro/((*x)*(*z));
    printf("element 1=%d\n",num1);
    printf("element 1=%d\n",num2);
    printf("element 1=%d\n",num3);

}


int main()
{
    int a,b,c;
    printf("element 1=");
    scanf("%d",&a);
    printf("element 2=");
    scanf("%d",&b);
    printf("element 3=");
    scanf("%d",&c);
    printf("the value before swapping are:");
    printf("element 1=%d",a);
    printf("element 2=%d",b);
    printf("element 3=%d",c);
    int *p,*q,*r;
    p=&a;
    q=&b;
    r=&c;
    swap(p,q,r);
}