//Area and perimeter of circle: type 1
#include<stdio.h>
void area_peri();
void main()
{
	area_peri();
	
}
void area_peri()
{
	float r, A,P;
	printf("Enter radius of circle\n");
	scanf("\n%f",&r);
	A = 3.14 * r * r;
	printf("Area of circle is : %.2f\n",A);
	P = 2 * 3.14 * r;
	printf("perimeter of circle is : %.2f",P);
}
