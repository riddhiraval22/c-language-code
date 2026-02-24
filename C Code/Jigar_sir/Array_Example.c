#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5][5],i;
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

