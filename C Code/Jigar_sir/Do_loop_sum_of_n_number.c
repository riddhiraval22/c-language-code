#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0;
	printf("enter n :");
	scanf("%d",&n);
	while(n>0)
	{
		sum=sum+n;
		n--;
		
	}
	printf("sum = %d",sum);
}
