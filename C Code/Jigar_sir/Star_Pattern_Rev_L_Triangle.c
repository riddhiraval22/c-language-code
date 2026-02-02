#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	for (i=9;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
