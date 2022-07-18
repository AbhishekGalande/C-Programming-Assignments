// Finding F from C: type 2
#include<stdio.h>
float temperature();
void main()
{
	float x;
    x = temperature();
  	printf("\ntemperature in fahrenheit is: %.2f",x);
} 
float temperature()
{
	float fahrenheit, celsius;
	printf("Enter temperature in celsius\n");
	scanf("%f",&celsius);
	fahrenheit = (celsius * 9/5)+32;
	return fahrenheit;
}
