#include<stdio.h>
#include<string.h>
#define MAX 2
struct dept
{
    char dept[10];  
}d;

struct employee
{
    int empid;
    float empsal;
    char empname[10];
    struct dept d;
}emp;

int main()
{
    
    
    strcpy(emp.d.dept,"electronic");
    printf("%s",emp.d.dept,"electronic");    
     
}