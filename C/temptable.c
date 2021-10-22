#include<stdio.h>

// Fahrenheit to celsius temp table starting from 0, 20, 40,... 300
int main()
{
	int fahr, cel;
	int lower = 0, step = 20, higher = 300;
	
	fahr = lower;
	while(fahr<=higher)
	{
		cel = 5 * ((fahr-32) / 9);
		printf("\nFahrenheit: %d Celsius: %d ", fahr, cel);
		fahr += step;
	}
	return 0;
}
// Integers 
