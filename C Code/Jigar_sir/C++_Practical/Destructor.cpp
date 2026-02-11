#include<iostream>
#include<conio.h>
using namespace std;
class Box
{
	public:
	Box()
	{
		cout<<"\nConstructor callled";
	}
	~Box()
	{
		cout<<"\nDestructor called";
	}
};
int main()
{
	Box b1,b2,b3;
	{
		Box b4;
	}
	Box b5;
	{
		Box b6;
	}
	getch();
}

