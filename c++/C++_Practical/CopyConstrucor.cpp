#include<iostream>
#include<conio.h>
using namespace std;
class Box
{
	double hight,width,depth;
	public:
		Box()
		{
			cout<<"\n Default Constructor";
			width=3;
			hight=4;
			depth=5;
		}
		Box(double w,double h,double d)
		{
			cout<<"\n Parameterized Constructor called";
			width=w;
			hight=h;
			depth=d;
		}
		Box(Box &b)
		{
			cout<<"\n Copy Constructor";
			width=b.width;
			hight=b.hight;
			depth=b.depth;
		}
		void volumn()
		{
			cout<<"\n volume :"<<width*hight*depth;
		}
};
int main()
{
	Box b1;
	b1.volumn();
	Box b2(4,5,6);
	b2.volumn();
	Box b3(b1);
	b3.volumn();
	getch();
}
