//Even odd : type1
#include<stdio.h>
void even_odd();
void main()
{
	even_odd();

}
void even_odd()
{
	int num;
	printf("Enter any number\n");
	scanf("%d",&num);
	
	if (num %2==0)
	{
		printf("Given Number is even");
	}
	else
	{
		printf("Given Number is odd");
	}	
}
