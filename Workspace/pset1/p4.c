//WRITE A PROGRAM IN C TO SWAP TWO NUMBERS USING FUNCTION.

#include<stdio.h>

int swap(int a, int b);

int main()
{
	int num1,num2;
	printf("Enter two numbers :\n");
	scanf("%d %d ",&num1,&num2);
	printf(" Before swap num1=%d and num2=%d",num1,num2);
	num1,num2=swap(num2,num1);
	printf("\n After swap num1=%d and num2=%d",num2,num1);
	return 0;
}
int swap(int x, int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	return x,y;
}
