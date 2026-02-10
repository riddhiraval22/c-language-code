#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	int a;
	public:
		void getA()
		{
			cout<<"Enter A: ";
			cin>>a;
		}
		void putA()
		{
			cout<<"\n A : "<<a;
		}
};
class B:public A
{
		int b;
	public:
		void getB()
		{
			cout<<"\nEnter B:";
			cin>>b;
		}
		void putB()
		{
			cout<<"\n B : "<<b;
		}
};
class c:public B
{
		int c;
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
int main()
{
	c c1;
	c1.getA();
	c1.getB();
	c1.getC();
	c1.putA();
	c1.putB();
	c1.putC();
	getch();
}
