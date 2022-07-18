//take the choice of program from the user: type 2
#include<stdio.h>
float temp();
int greater();
int even_odd();
float total_salary();
void main()
{
	int y, z,choice;
	float x, t;
	printf("Enter your Choice for the program of: \n For [ fahrenheit from celsius :1, Greater of three number:2, Even odd:3, Total salary :4 ]\n");
	scanf("%d",&choice);
	if(choice==1)
	{
	x = temp();
	printf("Temp in fahrenheit is :%f\n",x);
	}
	if(choice==2)
	{
	y = greater();
	printf("Greater number is: %d\n",y);
	}
	if(choice==3)
	{
	z = even_odd();
	if(z==1)
	printf("Given number is Even\n");
	else
	printf("Given number is odd\n");
	}
	if(choice==4)
	{
	t = total_salary();
	printf("Total Salary = %f\n",t);
	}
	
	
}
float temp()
{
	float fahrenheit, celsius;
	printf("Enter temperature in celsius\n");
	scanf("%f",&celsius);
	fahrenheit = (celsius * 9/5)+32;
	return fahrenheit;
}
int greater()
{
	int a, b, c;
			
	printf("Enter First number\n");
	scanf("%d", &a);
	printf("Enter Second number\n");
	scanf("%d",&b);
	printf("Enter third number\n");
	scanf("%d",&c);
			
	if(a > b)
		{
		    if(a > c)
		        return a;
		    else
		        return b;
		}
	else
		{
			if(b > c)
		    return b;
		    else
		    return c;
		}	
}
int even_odd()
{
	int num;
			printf("Enter any number\n");
			scanf("%d",&num);
			
			if (num %2==0)
			{
			   return 1	;
			}
			else
			{
				return 0;
			}
}
float total_salary()
{
		//total salary based on basic salary		
		float Bs,da,ta,hra,Ts; //bs = basic salary
		printf("Enter a Basic Salary :");
		scanf("%f",&Bs);
		if(Bs<=5000)
			{
			da=0.10*Bs;
			ta=0.20*Bs;
			hra=0.25*Bs;
			Ts=Bs+da+ta+hra; //ts = Total salary
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

