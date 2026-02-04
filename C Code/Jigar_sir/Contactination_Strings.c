#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	//concatination of strings
	char str1[50],str2[50];
	printf("Enter string 1:");
	gets(str1);
	printf("Enter String 2:");
	gets(str2);
	strcat(str1,str2);
	printf("Contactionation of stings :: %s",str1);
}
