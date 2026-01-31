#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,value;
	//printf("Enter your value :");
	//scanf("%d",&value);
	for(i=1;i<10;i++)
	{
		for(k=1;k<=10-i;k++)
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
