#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter Number :");
	scanf("%d",&a);
	//printf("Enter Value 2 :");
	//scanf("%d",&b);
	// even or odd
	if(a/2==0)
	{
		printf("\n%d is odd number.",a);
	}
	else
	{
		printf("\n%d is even number. ",a);
	}
	//postive negative and zero
	if (a<0)
	{
		printf("\n%d is negative number .",a);
	}
	else if (a>0)
	{
		printf("\n%d is positive number .",a);
	}
	else if(a==0)
	{
		printf("\n%d is zero",a);
	}
	else 
	{
		printf("\nYou enterd wrong number.",a);
	}
}
