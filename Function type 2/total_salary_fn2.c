//total salary based on basic salary: type2
#include<stdio.h>
float total_salary();
void main()
{
	float x;
	x = total_salary();
	printf("Total Salary = %.2f",x);
	

}
float total_salary()
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
		return Ts;
		}
	else
		{
		da=0.15*Bs;
		ta=0.25*Bs;
		hra=0.30*Bs;
		Ts=Bs+da+ta+hra;
		return Ts;
		}
}
