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
	
}

