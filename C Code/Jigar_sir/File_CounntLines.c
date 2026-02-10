#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *p;
	char ch;
	int linecount=0;
	p=fopen("test.txt","r");
	if(p == NULL)
	{
		printf("file does not exit ");
	//	return -1;
	}
	while((ch==fgetc(p))!= EOF)
	{
		if(ch=='\n')
		linecount++;
	}
	fclose(p);
	printf("total number of lines are :%d\n",linecount);
	getch();
	
}
