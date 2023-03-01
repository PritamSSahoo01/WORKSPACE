//WAP USING FUNCTION TO CONVERT CELSIUS TO FAHRENHEIT


#include <stdio.h>

int tempconvert(int a);

int main()
{
	int a,res;
	printf("Enter the measured celsius to convert:\n");
	scanf("%d",&a);
	res=tempconvert(a);
	printf("the converted celsius to fahrenheit is:%d\n",res);
	return 0;
}
int tempconvert(int a)
{
	int c;
	c = (a*9/5)+32;
	return c;
}
