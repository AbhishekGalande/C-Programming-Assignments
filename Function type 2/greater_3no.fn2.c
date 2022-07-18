#include<stdio.h>
int greater();
void main()
{
	int x;
	x  = greater();
	printf("%d is greater",x);

}
int greater()
{
	int a, b, c;
	
	printf("Enter First number\n");
	scanf("%d", &a);
	printf("Enter Second number\n");
	scanf("%d",&b);
	printf("Enter third number\n");
	scanf("%d",&c);
	
	if(a > b)
    {
        if(a > c)
            return a;
        else
            return b;
    }
    else
	{
	  if(b > c)
        return b;
    else
        return c;
    }
}
