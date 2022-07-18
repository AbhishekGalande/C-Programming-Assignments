//operations : type2
#include<stdio.h>
int addition();
int subtraction();
int multiplication();
int division();
int remainder();
int main()
{
	int choice, x, y, z, p, q;
	printf("Enter your Choice: \n For [ Addition(+) :1, Subtraction(-):2, Multiplication(*):3, Division(/):4, Remainder(%%): 5 ]\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		x = addition();
		printf("Addition is: %d",x);
	}
	if(choice==2)
	{
		y = subtraction();
		printf("Subtraction is: %d",y);
	}
	if(choice==3)
	{
		z = multiplication();
		printf("Multiplication is: %d",z);
	}
	if(choice==4)
	{
		p = division();
		printf("Division is: %d",p);
	}
	if(choice==5)
	{
		q = remainder();
		printf("Remainder is: %d",q);
	}
}
int addition()
{
	
	int a, b, c;
	printf("Enter value of a:\n");
	scanf("%d",&a);
	printf("Enter value of b:\n");
	scanf("%d",&b);
	c = a + b;
	return c;
}
int subtraction()
{
	int a, b, c;
	printf("Enter value of a:\n");
	scanf("%d",&a);
	printf("Enter value of b:\n");
	scanf("%d",&b);
	c = a - b;
	return c;
}
int multiplication()
{
	int a, b, c;
	printf("Enter value of a:\n");
	scanf("%d",&a);
	printf("Enter value of b:\n");
	scanf("%d",&b);
	c = a * b;
	return c;
}
int division()
{
	int a, b, c;
	printf("Enter value of a:\n");
	scanf("%d",&a);
	printf("Enter value of b:\n");
	scanf("%d",&b);
	c = a / b;
	return c;
}
int remainder()
{
	int a, b, c;
	printf("Enter value of a:\n");
	scanf("%d",&a);
	printf("Enter value of b:\n");
	scanf("%d",&b);
	c = a % b;
	return c;
}

