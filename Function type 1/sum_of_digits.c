//sum of digits : type1
#include<stdio.h>
void sum_of_digit();
void main()
{
	 sum_of_digit();

}
void sum_of_digit()
{
	int num, rem, sum=0;
	printf("please enter any number\n");
	scanf("%d",&num);
	while(num>0)
	{
		rem = num%10;
		sum =sum+rem;
		num = num/10;
	}
	printf("sum of digits is:%d",sum);
}
