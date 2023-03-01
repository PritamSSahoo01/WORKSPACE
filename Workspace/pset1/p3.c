/*WRITE A  FUNCTION TO CALCULATE FORCE OF ATTRACTION ON A BODY OF MASS M EXERTEDBY EARTH(g=9.8m/s^20)*/

#include <stdio.h>

float force (float mass);

float main()
{
	float m;
	printf("Enter the value of mass in kgs \n");
	scanf("%f",&m);
	printf("The value of force in newton is %f \n",force(m));
	return 0;
}
float force(float mass)
{
	
	float result = mass * 9.8;
	return result;
}
