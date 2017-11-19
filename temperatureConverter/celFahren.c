#include<stdio.h>
int main()
{
	float celSius,fahreN;
	float lower=0;
	float upper=180;
	celSius= upper;
	printf("Celsius \t Fahrenheit\n");
	for(float upper=148.9;upper>=-17.8;upper=upper-20)
	{
		fahreN= upper*(5/9)+32;
		printf("%3.1f\t%3.1f\n",upper,fahreN);		
	}
	
}
