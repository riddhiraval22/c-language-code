#include<iostream>
#include<conio.h>
using namespace std;
class Tops2;
class Tops1
{
	int x;
	public:
		void getdata()
		{
			cout<<"\nEnter X : ";
			cin>>x;			
		}
		friend int max(Tops1 t1,Tops2 t2);
};
class Tops2
{
	int y;
	public:
		void getdata()
		{
			cout<<"\nEnter Y : ";
			cin>>y;			
		}
		friend int max(Tops1 t1,Tops2 t2);
};
int max(Tops1 t1, Tops2 t2)
{
	if(t1.x>t2.y)
	{
		return t1.x;
	}
	else
	{
		return t2.y;
	}
}
int main()
{
	Tops1 t1;
	Tops2 t2;
	t1.getdata();
	t2.getdata();
	cout<<"\nMax Value is : "<<max(t1,t2);
	getch();
}
