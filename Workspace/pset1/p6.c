//WRITE A PROGRAM IN C TO CONVERT DECIMAL NUMBER TO BINARY NUMBER USING THE FUNCTION.

#include<stdio.h>

int tobin(int dn);

int main()
{
	int bno;
	int dn;
	printf("input any decimal number :");
	scanf("%d",&dn);
	bno = tobin(dn);
	printf("\n The binary value is : %d ",bno);
	return 0;
}
int tobin(int dn)
{
	int bno=0,rem,f=1;
	while(dn!=0)
	{
		rem=dn%2;
		bno = bno + rem * f;
		f=f*10;
		dn=dn/2;
	}
	return bno;
}

