/*Write a C program that calculates the factorial of a number using a function. Include function declaration, definition, and call.*/
#include<stdio.h>
#include<conio.h>
long fact(n)
{
	long f;
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		f=n*fact(n-1);
		
	}
	return f;
}
void main()
{
	 long f,n;
	 printf("\nEnter Value :");
	 scanf("%ld",&n);
	 f=fact(n); // function call
	 printf("\nFactorial of %ld is %ld",n,f);
	 getch();
}

