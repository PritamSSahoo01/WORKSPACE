#include<stdio.h>
#include"head.h"

int main()
{
	float p,b,hy;
	printf("Enter height______base______hypotenuse:\n");
	scanf("%f \n %f \n %f",&p,&b,&hy);
	printf("sine function:%.2f",sine(p,hy));
	printf("cos function:%.2f",cosine(b,hy));
	printf("tan function:%.2f",tangent(p,b));
	printf("total ans");
	return 0;

}
