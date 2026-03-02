#include<iostream>
#include<conio.h>
using namespace std;
class Tops
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"\nEnter X : ";
			cin>>x;
			cout<<"\nEnter Y : ";
			cin>>y;
			
		}
		friend int max(Tops t1);
};
int max(Tops t1)
{
	if(t1.x>t1.y)
	{
		return t1.x;
	}
	else
	{
		return t1.y;
	}
}
int main()
{
	Tops t1;
	t1.getdata();
	cout<<"\nMax Value is : "<<max(t1);
	getch();
}
