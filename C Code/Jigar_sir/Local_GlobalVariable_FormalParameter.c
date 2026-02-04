#include<stdio.h>
#include<conio.h>
int sum; // global variable 
int Addition(int x,int y)//formal parameter
{
return x+y;	
}
void main()
{
	int a,b;  //local variables
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);
	sum=Addition(a,b);
	printf("Addition is : %d",sum);
	getch();
	
}
