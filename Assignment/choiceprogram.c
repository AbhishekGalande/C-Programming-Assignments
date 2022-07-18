#include<stdio.h>
void main()
{
	int choice;
	printf("Enter your Choice: \n For [ fahrenheit from celsius :1, Greater of three number:2, Even odd:3, Total salary :4 ]\n");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		// Finding F from C
			float fahrenheit, celsius;
			printf("Enter temperature in celsius\n");
			scanf("%f",&celsius);
			fahrenheit = (celsius * 9/5)+32;
			printf("\ntemperature in fahrenheit is: %.2f",fahrenheit);
		 
	}
	if(choice==2)
	{
	
			int a, b, c;
			
			printf("Enter three numbers\n");
			scanf("%d %d %d", &a, &b, &c);
			
			if(a > b)
		    {
		        if(a > c)
		            printf("a: %d is Greater\n", a);
		        else
		            printf("b: %d is Greater\n", b);
		    }
		    else
			{
			  if(b > c)
		        printf("b: %d is Greater\n", b);
		    else
		        printf("c: %d is Greater\n", c);
		    }
	}
	if(choice==3)
	{
		
			int num;
			printf("Enter any number\n");
			scanf("%d",&num);
			
			if (num %2==0)
			{
				printf("Given Number is even");
			}
			else
			{
				printf("Given Number is odd");
			}
	}
	if(choice==4)
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

}
