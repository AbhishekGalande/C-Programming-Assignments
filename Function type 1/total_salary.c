//total salary based on basic salary: type 1
#include<stdio.h>
void total_salary();
void main()
{
	total_salary();

}
void total_salary()
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
		printf("Total Salary = %.2f",Ts);
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
