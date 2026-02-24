#include<iostream>
#include<conio.h>
using namespace std;
class Base
{public:
	 virtual void show()
	{
		cout<<"\nShow from Base";
	}
};
class Derived:public Base
{public:
	void show()
	{
		cout<<"\nShow from Derived";
	}
};
int main()
{
	Base *bptr;
	Base b;
	
	Derived d;
	bptr=&b;
	
	b.show();
	bptr=&d;
	d.show();
	getch();
}
