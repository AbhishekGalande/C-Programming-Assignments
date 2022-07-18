//Area and perimeter of rectangle
#include<stdio.h>
void main()
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
