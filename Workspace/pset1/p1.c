//write a program using functions to find average of threee numbers.


#include<stdio.h>

float average(float a ,float b , float c);

float main()
{
	float a,b,c,avg;
	printf("Enter the value of a :\n");
	scanf("%f",&a);
	printf("Enter the value of b :\n");
        scanf("%f",&b);
	printf("Enter the value of c :\n");
        scanf("%f",&c);
	avg=average(a,b,c);
	printf("average value:%f",avg);
	return 0;
}
float average(float a , float b , float c)
{
	float res;
	res =(float)(a+b+c)/3;
	return res;
}


