#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f;
	int eno,dno,e,d;
	char *ename,*en;
	double salary,s;
	f=fopen("Emp.txt","w");
	printf("\nEmployee name:");
	gets(ename);
	printf("\nEmployee No:");
	scanf("%d",&eno);
	printf("\nDepartment No:");
	scanf("%d",&dno);
	printf("\nEnter Salary:");
	scanf("%lf",&salary);
	fprintf(f,"%s %d %d %lf",ename,eno,dno,salary);
	fclose(f);
	
	f=fopen("Emp.txt","r");
	fscanf(f,"%s %d %d %lf",en,e,d,s);
	printf("\nEmployee Name : %s",en);
	printf("\nEmployee No :%d",e);
	printf("\nDepartment No: %d",d);
	printf("\nSAlary : %lf",s);
	fclose(f);
	getch();
}

