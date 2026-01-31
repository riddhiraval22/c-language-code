#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=9;i>=0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
