#include<stdio.h>
#include<conio.h>

int sub(int a,int b)
{
	return a-b;
}

void main()
{
	int x,y;
	printf("Enter value:");
	scanf("%d",&x);
	printf("Enter value:");
	scanf("%d",&y);
	printf("Subtraction is : %d",sub(x,y));
	getch();
}
