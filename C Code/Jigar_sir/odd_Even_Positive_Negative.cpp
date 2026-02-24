#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter value 1 :");
	scanf("%d",&a);
	printf("Enter Value 2 :");
	scanf("%d",&b);
	// even or odd
	if(a/2==0)
	{
		printf("%d is odd ",a);
	}
	else
	{
		printf("%d is even ",a);
	}
	//postive negative and zero
	if (a<0)
	{
		printf("%d is negative number .");
	}
	else if (a>0)
	{
		printf("%d is positive number .");
	}
	else is (a==0)
	{
		printf("%d is zero");
	}
	else 
	{
		printf("You enterd wrong number.");
	}
}
