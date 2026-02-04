#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[50],str2[50];
	printf("Enter String1 :");
	gets(str1);
	strcpy(str2,str1);
	printf("\nCopy string1 into string 2 ");
	printf("\n\nString 2 :: %s",str2);
}
