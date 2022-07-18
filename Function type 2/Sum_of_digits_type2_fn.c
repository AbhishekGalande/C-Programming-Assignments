//sum of digits and revere of digits : type 2
#include<stdio.h>
int sum_of_digit();
int reverse_no();
void main()
{
	int x;
	x = sum_of_digit();
	printf("sum of digits is:%d\n",x);
	int y;
	y  = reverse_no();
	printf("\nReverse of given number is: %d",y);

}
int sum_of_digit()
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
	return sum;
}
int reverse_no()
{
	int num,n,r,rev=0; 
	printf("Enter a number\n");
	scanf("%d",&n);
	
	num = n;
	while(n!=0)
	{
		r = n%10;
		rev = rev*10+r;
		n = n/10;
	}
	return rev;
}
