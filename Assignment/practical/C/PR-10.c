/*Write a C program to demonstrate pointer usage. Use a pointer to modify the value of a variable and print the result.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	double a,b,*p,*q;
	printf("\n Enter A :");
	scanf("%lf",&a);
	p=&a;
	printf("\n p : %u",p);
	printf("\na :%lf",a);
	printf("\n*p : %lf",*p);
	printf("\n Enter B :");
	scanf("%lf",&b);
	q=&b;
	printf("\n q :%u",q);
	printf("\nb :%lf",b);
	printf("\n*q :%lf",*q);
	getch();
}

