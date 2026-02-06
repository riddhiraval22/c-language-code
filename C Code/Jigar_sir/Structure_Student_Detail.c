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
	printf("\nEnter Roll no of Student :");
	scanf("%d",&s.rno);
	printf("\nEnter Student Name of :");
	scanf("%s",s.name);
	printf("\nEnter Percentage of Student : ");
	scanf("%ld",&s.per);
	return s;
}
void printData(struct Student s)
{
	printf("\nRoll No:%d",s.rno);
	printf("\nStudent Name:%s",s.name);
	printf("\nPercentage :%ld",s.per);
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
