#include<stdio.h>

void cheers(int);  //prototype no return value
double cube(double x); //prototype : Returns a variable
int main(void)
{
	double side=0;	
	printf("Hello! This is my first C program with ubuntu");
	cheers(5);
	printf("Give me a number: ");
	scanf("%lf", &side);
	double volume= cube(side);  // function call
	printf("A %lf-foot cube has a volume of %lf cubic feet", side, volume);
	cheers(cube(2)); //prototype protection at work
	return 0;
}

void cheers(int n)
{
	for(int i=0; i<n; i++)
	printf("Cheers! Woop Woop\n");
}

double cube(double x)
{
	return x*x*x;
}

