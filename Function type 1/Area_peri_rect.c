//Area and perimeter of rectangle : type1
#include<stdio.h>
void area_peri();
void main()
{
	area_peri();
}
void area_peri()
{
	float l, b, A,P;
	printf("Enter length of rectangle\n");
	scanf("\n%f",&l);
	printf("Enter breadth of rectangle\n");
	scanf("\n%f",&b);
	A = (l * b);
	printf("Area of rectangle is : %.2f\n", A);
	P = 2 *(l + b );
	printf("perimeter of rectangle is : %.2f",P);	
}
