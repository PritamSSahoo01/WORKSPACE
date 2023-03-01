//WRITE A PROGRAM TO CALCULATE SIMPLE INTEREST USING FUNCTION.

#include<stdio.h>

float sim(float p,float r,float t);
int main(void)
{
	float a,b,c;
	float intrest;
	printf("enter the principal amount:\t");
	scanf("%f",&a);
	printf("enter the time period:\t");
        scanf("%f",&b);
	printf("enter the rate:\t");
        scanf("%f",&c);
	intrest = sim(a,b,c);
	printf("/n Simple intrest = %.2f",intrest);
	return 0;
}
float sim(float p,float r,float t)
{
	float si;
	si=(p*t*r)/100;
	return si;
}

