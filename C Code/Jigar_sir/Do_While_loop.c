#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0;
	printf("Enter N :");
	scanf("%d",&n);
	do
	{
		sum=sum+n;
		n--;
	}while(n>0);
	printf("Sum is: %d",sum);
	
	
}
