#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	printf("-----Array Elements------");
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d Elemts:",i);
		scanf("%d",&a[i]);
		
	}
	printf("\n\n-----Array Elemts Are------");
	for (i=0;i<5;i++)
	{
		printf("\nA[%d] : %d",i,a[i]);
	}
}
