#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	for(i=9;i>=0;i--)
	{
		for(k=1;k<=9-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
