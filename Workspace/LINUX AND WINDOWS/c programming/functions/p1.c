#include<stdio.h>
int count();
//int count=0;

int main()
{
     count();
     count();
     count();
     count();
     count();
}
int count()
{
    int count=0;
    count=count+1;
    printf("%d\t",&count);
}
