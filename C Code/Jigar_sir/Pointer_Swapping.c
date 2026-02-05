#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
void main()
{
	int a,b;
	printf("Enter A :");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);
	printf("\nBefore Swaping value of %d and %d ",a,b);
	swap(&a,&b);
	printf("\nAfter Swaping value of %d and %d ",a,b);
	
	
}
