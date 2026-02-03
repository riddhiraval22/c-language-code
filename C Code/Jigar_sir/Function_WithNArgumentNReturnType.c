#include<stdio.h>
#include<conio.h>

// Function with no parameter and no return type
void printLine()
{
	int i;
	for(i=0;i<40;i++)
	{
		printf("*");
	}
}

void main()
{
	printLine();
	printf("\nWelcome to the user defined Function\n");
	printLine();
	getch();
}
