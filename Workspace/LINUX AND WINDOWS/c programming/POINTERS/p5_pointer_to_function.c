#include <stdio.h>
//int (*func)(int, int);
int add(int x, int y)
{
    return x + y;
}
int sub(int x,int y)
{
    return x - y;
}
int mul(int x,int y)
{
    return x * y;
}
int div(int x,int y)
{
    return x / y;
}

int main()
{
    int res;
    char choice;
    int (*func)(int, int);
    printf("Enter the operation ypu want to perform:");
    scanf("%c",&choice);
    if(choice=='+')
    {
    
    func = &add;
    res = (*func)(10, 20);
    printf("value of add is %d", res);
    }
    else if(choice=='-')
    {
    func = &sub;
    res = (*func)(20, 10);
    printf("\nvalue of sub is %d", res);
    }
    else if(choice=='*')
    {
    func = &mul;
    res = (*func)(20, 10);
    printf("\nvalue of mul is %d", res);
    }
    else if(choice=='/'){
    func = &div;
    res = (*func)(20, 10);
    printf("\nvalue of div is %d", res);
    }
}
