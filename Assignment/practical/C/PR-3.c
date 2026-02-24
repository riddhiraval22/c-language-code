/*
Write a C program that includes variables, constants, and comments. Declare 
and use different data types (int, char, float) and display their values.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	//integer
	int a=1;
	//character
	char b='a';
	//double 
	double pi=3.14159;
	//float
	float d=2.0;
	//constant
	const int con=10;
	printf("Intgere number variable : %d\n",a);
	printf("Character type variable : %c\n",b);
	printf("Float type variable : %.1f\n",d);
	printf("Double type variable : %.5lf\n",pi);
	printf("Constant string : %d",con);
}

