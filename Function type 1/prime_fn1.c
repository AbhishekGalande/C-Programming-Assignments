//prime no : type1
#include<stdio.h>
void prime();
void main()
{
	prime();
}
void prime()
{
	int num, i,count = 0;
	printf("Enter the num\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
		if(count==2)
		{
			printf("Number is prime");
		}
		else
		{
			printf("Number is not prime");
		}	
}
