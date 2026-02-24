/*LAB EXERCISE: o Write a C program that stores 5 integers in a one-dimensional array and prints them.
 Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.*/
 
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,sum;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter %d row & %d column : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n 2d Array is \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+a[i][j];
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	printf("sum is : %d",sum);
}

