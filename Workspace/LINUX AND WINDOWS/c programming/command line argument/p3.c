/*#include<stdio.h>


int main(int argc,char *argv[])
{
    int i,n,sum=0,count=0;
    for(i=1;i<argc;i++)
    {
        sscanf(argv[i],"%d",&n);
        sum+=n;
    }
    printf("%d",sum);
    printf("\n%s",argv[0]);
    printf("\n%d",argc);
    for(i=1;i<argv[i];i++)
    {
        count++;
    }
    printf("\n%d",count);
}*/
#include<stdio.h>
#include<string.h>


int main(int argc,char *argv[])
{
    int i,n,sum=0,count=0;
    /*for(i=1;i<argc;i++)
    {
        sscanf(argv[i],"%d",&n);
        //sum+=n;
    }*/
    if(strcmp(argv[1],"-s")==0)
    {
        //int res=0;
        for(i=2;i<argc;i++)
        {
            sscanf(argv[i],"%d",&n);
            sum+=n;
        }
        printf("%d",sum);
    }
    else if(strcmp(argv[1],"-p")==0)
    {
        //int res=0;
        for(i=2;i<argc;i++)
        {
            sscanf(argv[i],"%d",&n);
            sum -= n;
        }
        printf("%d",sum);
    }
    else if(strcmp(argv[1],"-d")==0)
    {
        //int res=0;
        for(i=2;i<argc;i++)
        {
            sscanf(argv[i],"%d",&n);
            sum/=n;
        }
        printf("%d",sum);
    }
    else if(strcmp(argv[1],"-m")==0)
    {
        //int res=0;
        for(i=2;i<argc;i++)
        {
            sscanf(argv[i],"%d",&n);
            sum *= n;
        }
        printf("%d",sum);
    }
    else{
        printf("invalid input");
    }




   

}