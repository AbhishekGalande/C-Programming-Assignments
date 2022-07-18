//prime no : type2
#include<stdio.h>
int prime();
void main()
{
	int x;
	x  = prime();
	if(x==1)
	printf("Number is prime");
	else
	printf("Number is not prime");
}
int prime()
{
	int num, i ,count = 0;
	printf("Enter the num\n");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
		if(count==1)
		{
			return 1;
		}
		else
		{
			return 0;
		}	
}
