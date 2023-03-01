//WRITE A PROGRAM IN C TO CHECK WHETHER A NUMBER IS A PRIME NUMBER OR NOT USING THE FUNCTION

#include<stdio.h>

int check_prime(int num);

int main()
{
	int num;
	printf("Enter the number to be checked :");
	scanf("%d",&num);
	check_prime(num);
	return 0;
}
int check_prime(int x)
{
	int i,c=0;
	for (i=1 ; i <=x ; i++)
	{
		if(x%i == 0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("\n %d is a prime number",x);
	}
	else
	{
		printf("\n %d is not a prime number",x);
	}
	return 0;
}


