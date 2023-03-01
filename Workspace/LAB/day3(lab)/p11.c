#include<stdio.h>

int main(){
    int a,b,c ,d;
    printf("enter the 1st number:\n");
    scanf("%d",&a);
     printf("enter the 2nd number:\n");
    scanf("%d",&b);
    c =  a/b;
    printf("The quotient of the num %d and %d is %d\n",a,b,c);
    d=a%b;
    printf("The remainder of the num %d and %d is %d\n",a,b,d);

}