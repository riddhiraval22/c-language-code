#include<stdio.h>
#include<conio.h>

void main()
{
	int a1,b1;
printf("--------enter integer values----------------");
	printf("\n enter value of A :");
	scanf("%d",&a1);
	printf("a = %d",a1);
	printf("\n enter value of B :");
	scanf("%d",&b1);
	printf("b = %d",b1);
	printf("\n Sum of A  and B = %d",a1+b1);
	printf("\n sub of A and B = %d",a1-b1);
	printf("\n Mul of A and B = %d",a1*b1);
	
	printf("\n-------------- enter data with decimal point-----------");

		float a,b;
	printf("\n Enter value A :");
	scanf("%f",&a);
	printf("A is :%f",a);
	printf("\n Enter value of B :");
	scanf("%f",&b);
	printf("B is :%f",b);
	printf("\n Sum of A and B is = %.2f",a+b);
	printf("\n subtraction of A and B = %.2f",a-b);
	printf("\n Multiplication of A and B = %.2f",a*b);
	getch();
}
