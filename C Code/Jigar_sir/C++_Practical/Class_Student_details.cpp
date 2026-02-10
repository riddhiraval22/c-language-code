//C++ Class and object 
#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
	int rno;	
	char sname[50];
	double per;
	public:
		void getData()
		{
			cout<<"\nEnter Roll No : ";
			cin>>rno;
			cout<<"\nEnter Student Name : ";
			cin>>sname;
			cout<<"\nEnter Percentage : ";
			cin>>per;
		}
		void putData();
};
void Student::putData()
{
	cout<<"\nRoll No : "<<rno;
	cout<<"\nStudent Name : "<<sname;
	cout<<"\nPercentage : "<<per;
}
int main()
{
	Student s1;
	s1.getData();
	s1.putData();
	getch();
	return 0;
}
