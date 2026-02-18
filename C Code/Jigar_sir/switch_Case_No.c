#include<stdio.h>
#include<conio.h>
void main()
{
	int month;
	printf("Enter Number of Month :");
	scanf("%d",&month);
	switch(month)
	{
	case 1:
		printf("January Month");
		break;
	case 2:
		printf("Febuary Month");
		break;
	case 3:
		printf("March Month");
		break;
	case 4:
		printf("April Month");
		break;
	case 5:
		printf("May Month");
		break;
	case 6:
		printf("Jun Month");
		break;
	case 7:
		printf("July Month");
		break;
	case 8:
		printf("Augest Month");
		break;
	case 9:
		printf("septmber Month");
		break;
	case 10:
		printf("Octomber Month");
		break;
	case 11:
		printf("November Month");
		break;
	case 12:
		printf("December Month");
		break;
	default:
		printf("Wrong Number of month Kindly Enter Month Between 1 to 12!!");
	}
		getch();
}
