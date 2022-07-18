//factorial : type1
#include<stdio.h>
void factorial();

void main()
{
	factorial();

}
void factorial()
{
	int num, i,fact = 1;
	printf("Enter the num\n");
	scanf("%d",&num);
	i = num;
	while(i>=1)
	{
		fact = fact * i;
		i--;
	}
	printf("\nfactorial of given number is : %d",fact);
}
