/*Write a C program that takes two strings from the user and concatenates them using strcat(). Display the concatenated string and its length using strlen().*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	//concatination of strings
	char str1[50],str2[50];
	int l1;
	printf("Enter string 1:");
	gets(str1);
	printf("Enter String 2:");
	gets(str2);
	strcat(str1,str2);
	printf("Contactionation of stings :: %s",str1);
	l1=strlen(str1);
	printf("\nLength of string : %d",l1);
	getch();
}

