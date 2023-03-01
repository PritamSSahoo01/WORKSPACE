//WRITE A PROGRAM IN C TO CHECK A GIVEN NUMBER IS EVEN OR ODD USING THE FUNCTION.

#include<stdio.h>

int check ( int a);

int main()
{
	int num;
	printf("Enter any random number ;\n");
	scanf("%d",&num);
	check(num);
	return 0;
}
int check(int x)
{
	if (x%2==0)
	{
		printf("The entered number is even");
	}
	else
	{
		 printf("The entered number is odd");
	}
}
