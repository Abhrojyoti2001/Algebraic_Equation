/*Newton-Raphson Method*/
#include<stdio.h>
#include<math.h>
float f(float x)
{
	return (x*x*x-2*x+1);}
float d(float x)
{
	return (3*x*x-2);}
main()
{	float x0,x1,err=0.0001;	
	printf("Enter the initial guess: ");
	scanf("%f",&x0);
	/*Checking  for derivative of function is non zero*/
	if(d(x0)!=0)
		/*Calculation the value of the following algebraic equation*/
		{do
			{x1=x0;
			x0=x0-f(x0)/d(x0);}
		while(fabs(x1-x0)>=err);
		/*Printing the value of algebraic equation*/
		printf("Root=%.3f",x0);}
	else
		printf("This formula not aplicable.");
}
