#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[50];
	int l1;
	printf("Enter string :");
	gets(str1);
	l1=strlen(str1);
	printf("\n Length of string : %d",l1);
	getch();
}
