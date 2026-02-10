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
class D:public B,public c
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
	D d1;
	//d1.getA(); can't call
	d1.getB();
	d1.getC();
	d1.getD();
	//d1.putA(); can't call
	d1.putB();
	d1.putC();
	d1.putD();
	getch();
}
