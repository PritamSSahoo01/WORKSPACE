#include<stdio.h>


#define A 97

int main()
{
	int a,y,w,d;
	printf("Number of days:");
	scanf("%d",&a);
	y=a/365;
	w=(a%365)/7;
	d=(a%365)%7;
	printf("Years:%d \n",y);
	printf("Weaks:%d \n",w);
	printf("Days:%d \n",d);
}

/*int main()
{
	printf("%d\n",'a');
	printf("%c\n",97);
}*/
