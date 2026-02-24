#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[50],str2[50],str3[50];
	int l1,l2;
	printf("Enter 1st string :");
	gets(str1);
	printf("Enter 2nd string :");
	gets(str2);
	l2=strcat(str1,str2);
	l1=strlen(l2);
	printf("\n Length of string : %d",l1);
	getch();
}
