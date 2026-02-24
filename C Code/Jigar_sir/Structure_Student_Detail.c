#include<stdio.h>
#include<conio.h>
struct Student
{
	int rno;
	char name[50];
	long per;
};
struct Student getdata(struct Student s)
{
	int i;
	for (i=0;i<3;i++)
	{
	printf("\nEnter Roll no of Student %d:",i);
	scanf("%d",&s.rno);
	printf("\nEnter Student Name of %d:",i);
	scanf("%s",s.name);
	printf("\nEnter Percentage of Student %d: ",i);
	scanf("%ld",&s.per);
	return s;
	}
	
}
void printData(struct Student s)
{
	int i;
	for (i=0;i<3;i++)
	{
	printf("\n%d Roll No :%d",i,s.rno);
	printf("\n%d Student Name:%s",i,s.name);
	printf("\n%d Percentage :%ld",i,s.per);
	}
	
}
void main()
{
	struct Student s;
	int i;
	//clrscr();
	s=getdata(s);
	printData(s);
	getch();
}
