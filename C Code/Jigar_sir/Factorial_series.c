#include<stdio.h>
#include<conio.h>
long fact(n)
{
	long f;
	if(n==0 || n==0)
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
	 f=fact(n);
	 printf("\nFactorial of %ld is %ld",n,f);
	 getch();
}
