/*Regula-Falsi Method*/
#include<stdio.h>
#include<math.h>
float f(float x)
{
	int t = (pow(x,3)-(2*x)+1);
	printf("%f -> %f\n",x,t);
	return (t);}
main()
{	float a,b,x,err=0.0001;
	/*Lower & Upper guess for find the range*/
	do	
		{printf("Enter the values of lower guess & upper guess:");
		scanf("%f%f",&a,&b);}
	while(f(a)*f(b)>0);
	/*Calculation the value of the following algebraic equation*/
	do
		{x=(a*f(b)-b*f(a))/(f(b)-f(a));
		if((f(a)*f(x))<0)
			b=x;
		else
			a=x;}
	while(fabs(a-b)>=err);
	/*Printing the value of algebraic equation*/
	printf("Root=%.3f",x);
}
