// Finding F from C: type1
#include<stdio.h>
void temperature();
void main()
{
  temperature();
} 
void temperature()
{
	float fahrenheit, celsius;
	printf("Enter temperature in celsius\n");
	scanf("%f",&celsius);
	fahrenheit = (celsius * 9/5)+32;
	printf("\ntemperature in fahrenheit is: %.2f",fahrenheit);
}
