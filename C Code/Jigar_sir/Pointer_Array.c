//pointer with array
#include<stdio.h>
#include<conio.h>
void main()
{
	long i,a[5],*p;
	printf("\n array Elements");
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d elements :",i);
		scanf("%ld",&a[i]);
	}
	p=a;
//	printf("p is : %u",p);
	for(i=0;i<5;i++)
	{
		printf("\n%ld :%u",a[i],p++);
	}
}
