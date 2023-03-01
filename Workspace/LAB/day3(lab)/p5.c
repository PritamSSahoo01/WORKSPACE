#include<stdio.h>

int main()
{
    int n1,n2;
    float res;
    printf("Input two numbers:\n");
    scanf("%d %d",&n1,&n2);
    printf("x:%d\n",n1);
    printf("y:%d\n",n2);
    if(n1%n2==0){
        res=n1/n2;
        printf("%.1f",res);
    }
    else{
        printf("Division not possible");
    }
}