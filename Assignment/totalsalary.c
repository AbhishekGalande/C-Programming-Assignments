//total salary based on basic salary
#include<stdio.h>
void main()
{
float Bs,da,ta,hra,Ts; //Bs = basic salary
printf("Enter a Basic Salary :");
scanf("%f",&Bs);
if(Bs<=5000)
	{
	da=0.10*Bs;
	ta=0.20*Bs;
	hra=0.25*Bs;
	Ts=Bs+da+ta+hra; //Ts = Total salary
	printf("Total Salary = %f",Ts);
	}
else
	{
	da=0.15*Bs;
	ta=0.25*Bs;
	hra=0.30*Bs;
	Ts=Bs+da+ta+hra;
	printf("Total Salary = %f",Ts);
	}
}
