//Even odd : type2
#include<stdio.h>
int even_odd();
void main()
{
	int x;
	x = even_odd();
	if(x==0)
	printf("Given number is even",x);
	else
	printf("Given number is odd",x);
}
int even_odd()
{
	int num;
	printf("Enter any number\n");
	scanf("%d",&num);
	
	if (num %2==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}	
}
