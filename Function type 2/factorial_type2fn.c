#include<stdio.h>
int factorial();

void main()
{
	int x;
	x = factorial();
	printf("\nfactorial of given number is : %d",x);

}
int factorial()
{
	int num, i = 1,fact = 1;
	printf("Enter the num\n");
	scanf("%d",&num);
	i = num;
	while(i>=1)
	{
		fact = fact * i;
		i--;
	}
	return fact;
}
