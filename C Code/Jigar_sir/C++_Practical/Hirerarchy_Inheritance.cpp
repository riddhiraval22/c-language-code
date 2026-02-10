#include<iostream>
#include<conio.h>
using namespace std;
class A
{int a;
	public:
		void getA()
		{
			cout<<"\nEnter A: ";
			cin>>a;
		}
		void putA()
		{
			cout<<"\n A : "<<a;
		}
	
};
class B:public A
{	int b;
	public:
		void getB()
		{
			cout<<"\nEnter B: ";
			cin>>b;
		}
		void putB()
		{
			cout<<"\n B : "<<b;
		}
};
class c:public A
{	int c;
	public:
		void getC()
		{
			cout<<"\nEnter c: ";
			cin>>c;
		}
		void putC()
		{
			cout<<"\n C : "<<c;
		}
};
class D:public A
{	int d;
	public:
		void getD()
		{
			cout<<"\nEnter d: ";
			cin>>d;
		}
		void putD()
		{
			cout<<"\n D : "<<d;
		}
};
int main()
{
	B b1;
	c c1;
	D d1;
	b1.getA();
	b1.getB();
	b1.putA();
	b1.putB();
	c1.getA();
	c1.getC();
	c1.putA();
	c1.putC();
	d1.getA();
	d1.getD();
	d1.putA();
	d1.putD();
	getch();
}
