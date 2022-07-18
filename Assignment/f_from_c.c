// Finding F from C
#include<stdio.h>
void main()
{
	float fahrenheit, celsius;
	printf("Enter temperature in celsius\n");
	scanf("%f",&celsius);
	fahrenheit = (celsius * 9/5)+32;
	printf("\ntemperature in fahrenheit is: %.2f",fahrenheit);
} 
