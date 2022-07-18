//Area and perimeter of rectangle type 2
#include<stdio.h>
float area();
float peri();
void main()
{
	float x, y;
	x = area();
	printf("Area of rectangle is : %.2f\n", x);	
	y = peri();
	printf("perimeter of rectangle is : %.2f",y);

}
float area()
{
	float l, b, A;
	printf("Enter length of rectangle\n");
	scanf("\n%f",&l);
	printf("Enter breadth of rectangle\n");
	scanf("\n%f",&b);
	A = (l * b);
	return A;

}
float peri()
{
	float l, b,P;
	printf("Enter length of rectangle\n");
	scanf("\n%f",&l);
	printf("Enter breadth of rectangle\n");
	scanf("\n%f",&b);
	P = 2 *(l + b );
	return P;	
}
