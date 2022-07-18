//discount : type1
#include<stdio.h>
void discount();
void main()
{
	discount();

}
void discount()
{
	int discount, price, final_price;
	printf("Enter the price:");
	scanf("%d",&price);
	if(price>=5000)
	{
		discount = 0.20 * price;
		final_price = price - discount;
		printf("Final price of item is: %d",final_price);
	}
	else
	{
		discount = 0.10 * price;
		final_price = price - discount;
		printf("Final price of item is: %d",final_price);
	}
}
