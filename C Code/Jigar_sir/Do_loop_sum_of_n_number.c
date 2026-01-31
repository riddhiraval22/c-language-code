#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0;
	printf("Enter n :");
	scanf("%d",&n);
	while(n>0)
	{
		sum=sum+n;
		n--;
		
	}
	printf("sum = %d",sum);
}
