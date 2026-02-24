/*
Write a C program to check if a number is even or odd using an if-else statement. 
Extend the program using a switch statement to display the month name based on the user's input (1 for January, 2 for February, etc.).*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("Enter Number :");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("Number is Even ");
	}
	else
	{
		printf("Number is Odd");
	}
	getch();
}


