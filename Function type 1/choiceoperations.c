//operations : type1
#include<stdio.h>
void operations();
void main()
{
	operations();

}
void operations()
{
	int choice;
	int a, b;
	printf("Enter your Choice: \n For [ Addition(+) :1, Subtraction(-):2, Multiplication(*):3, Division(/):4, Remainder(%%): 5 ]\n");
	scanf("%d",&choice);
	printf("Enter value of a:\n");
	scanf("%d",&a);
	printf("Enter value of b:\n");
	scanf("%d",&b);
	
	if(choice==1)
	{
		printf("Addition is: %d",a + b);
	}
	if(choice==2)
	{
		printf("Subtraction is: %d",a - b);
	}
	if(choice==3)
	{
		printf("multiplication is: %d",a * b);
	}
	if(choice==4)
	{
		printf("division is: %d",a / b);
	}
	if(choice==5)
	{
		printf("Remainder is: %d",a % b);
	}
}
