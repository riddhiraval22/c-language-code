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
		void volumn()
		{
			cout<<"\n volume :"<<width*hight*depth;
		}
};
int main()
{
	Box b1;
	b1.volumn();
	getch();
}
