#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	//Reverse of strings
	char str1[50];
	printf("Enter string 1:");
	gets(str1);
    strrev(str1);
	printf("Reverse strings : %s", str1);	
}
