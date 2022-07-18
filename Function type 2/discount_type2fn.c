
#include<stdio.h>
int discount();
void main()
{
	int z;
	z= discount();
	if(z==0)
	printf("Final price of item is: %d",z);
	else
	printf("Final price of item is: %d",z);

}
int discount()
{
	int discount, price, final_price;
	printf("Enter the price:");
	scanf("%d",&price);
	if(price>=5000)
	{
		discount = 0.20 * price;
		final_price = price - discount;
		return final_price;
	}
	else
	{
		discount = 0.10 * price;
		final_price = price - discount;
		return final_price;
	}
}
