//Area and perimeter of circle type2
#include<stdio.h>
float area();
float peri();
void main()
{
	float x,y;
	x = area();
	printf("Area of circle is : %.2f\n",x);
	y = peri();
	printf("perimeter of circle is : %.2f",y);
	
}
 float area()
{
	float r, A;
	printf("Enter radius of circle\n");
	scanf("\n%f",&r);
	A = 3.14 * r * r;
	return A;
	
}
float peri()
{
	float r,P;
	printf("Enter radius of circle\n");
	scanf("\n%f",&r);
	P = 2 * 3.14 * r;
	return P;

}
