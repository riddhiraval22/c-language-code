#include<iostream>
#include<conio.h>
using namespace std;
class RBI
{
	virtual void roi(double r)=0;
};
class SBI:public RBI
{
	public:
	void roi(double r)
	{
		cout<<"\nInterest Rate Given By SBI is : "<<r;
	}
	void show()
	{
		cout<<"\nHi, I am SBI";
	}
};
class HDFC:public RBI
{
	public:
	void roi(double r)
	{
		cout<<"\nInterest Rate Given By HDFC is : "<<r;
	}
	void show()
	{
		cout<<"\nHi, I am HDFC";
	}
};
int main()
{
	SBI s;
	s.show();
	s.roi(5.5);
	HDFC h;
	h.show();
	h.roi(6.8);
	getch();
	
}
