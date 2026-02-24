/*LAB EXERCISE: o Write a C program that stores 5 integers in a one-dimensional array and prints them.
 Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.*/
 #include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		printf("Enter a[%d]\n",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<5;i++)
	{		
		printf("array value of a[%d]: %d\n",i,a[i]);
	}
	getch();
}

