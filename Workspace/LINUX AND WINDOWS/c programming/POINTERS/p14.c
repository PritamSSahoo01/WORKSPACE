/*#include<stdio.h>
int main()
{
    int *p;
    p=0;
    printf("%d",p);
}*/
#include<stdio.h>


int main(int argc,char *argv[])
{
    int i,n,sum=0;
    for(i=1;i<argc;i++)
    {
        sscanf(argv[i],"%d",&n);
        sum+=n;
    }
    printf("%d",sum);
}