//student : type2
#include<stdio.h>
float disc();
void main()
{
	float x;
	x = disc();
	printf("\nprice after given discount : %.2f ",x);
	
}
float disc()
{
	float price;
	int student;
	printf("\nAre you student? : 1.yes 2.no : \n");
	scanf("%d", &student);
	printf("\nEnter the price of an item : ");
	scanf("%f", &price);
	float Final_bill;

	if (student == 1)
	{
		if(price >= 500)
			{
			Final_bill = price - (price * 0.20);
			return Final_bill;
			}
		else
			{
			Final_bill = price - (price * 0.10);
			return Final_bill;
			}
			
	}
	if(student==2)
	{
	
		if(price >= 600)
			{
			Final_bill = price - (price * 0.15);
			return Final_bill;
			}
		else
			{
			Final_bill = price;
			return Final_bill;
			}
	}
}
