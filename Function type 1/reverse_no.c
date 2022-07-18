//Reverse of number : type 1
#include<stdio.h>
void reverse_no();
void main()
{
	reverse_no();
}
void reverse_no()
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
	printf("\nReverse of given number is: %d",rev);
}
