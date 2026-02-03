#include<stdio.h>
#include<conio.h>

void add(int a,int b)
{
	printf("Addition is :%d",a+b);
}

void main()
{
	int x,y;
	printf("Enter Value :");
	scanf("%d",&x);
	printf("Enter Value :");
	scanf("%d",&y);
	add(x,y);
}
