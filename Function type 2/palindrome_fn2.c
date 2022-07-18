//palindrome number : type2
#include<stdio.h>
int palindrome();
void main()
{
	int x;
	x = palindrome();
	if(x==1)
	{
		printf("\nGiven number is palindrome");
	}
	else
	{
		printf("\nGiven number is not palindrome");
	}
}
int palindrome()
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
	if(num==rev)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
