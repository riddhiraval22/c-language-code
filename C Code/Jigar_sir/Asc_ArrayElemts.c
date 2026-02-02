#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,temp;
	for(i=0;i<5;i++)
	{
		printf("Enter %d elements",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\nA[%d] is %d",i,a[i]);
	}
	for (i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n\n-------Ascending order-------");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d] : %d",i,a[i]);
		
	}
	printf("\n\n-------Descending order-------");
	for (i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nA[%d] : %d",i,a[i]);
		
	}
}
