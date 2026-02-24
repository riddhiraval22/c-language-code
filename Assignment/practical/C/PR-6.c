/*Write a C program to print numbers from 1 to 10 using all three types of loops (while, for, do-while).*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j=0,k;
	printf("For Loop...\n");
	for(i=0;i<=10;i++)
	{
		printf("%d\n",i);
	}
		printf("\n\nDo While Loop.....\n");
	do
	{		
		printf("%d\n",j);
		j++;
	}while(j<=10);
	printf("\n\nWhile Loop....\n");
	while(k<=10)
	{
		printf("%d\n",k);
		k++;
	}
	getch();
}

