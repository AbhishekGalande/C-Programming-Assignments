//student : type1
#include<stdio.h>
void choice();
void main()
{
	choice();

}
void choice()
{
	int choice;
	printf("Enter your Choice: for [Student:1, Not student:2]\n");
	scanf("%d",&choice);
	
	if(choice==1)
	{
			int discount, price, final_price;
			printf("Enter the price:");
			scanf("%d",&price);
			if(price>500)
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
	if(choice==2)
	{
		int discount, price, final_price;
			printf("Enter the price:");
			scanf("%d",&price);
			if(price>600)
			{
				discount = 0.15 * price;
				final_price = price - discount;
				printf("Final price of item is: %d",final_price);
			}
			else
			{
				final_price = price;
				printf("Final price of item is: %d",final_price);
			}
		
	}
}
