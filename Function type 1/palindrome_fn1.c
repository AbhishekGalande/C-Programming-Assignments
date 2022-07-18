//palindrome number : type1
#include<stdio.h>
void palindrome();
void main()
{
	palindrome();

}
void palindrome()
{
	int n,num,r,rev; 
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
	
	if(num==rev)
	{
		printf("\nGiven number is palindrome");
	}
	else
	{
		printf("\nGiven number is not palindrome");
	}
}
