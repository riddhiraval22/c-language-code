#include<iostream>
#include<conio.h>
using namespace std;
class Tops
{
	int a,b;
	public:
		int c;
};
int main()
{
	Tops t1;
//	t1.a=10; Private variable
//	t1.b=20; private variable
	t1.c=30; //public variable
	cout<<"C : "<<t1.c;
	getch();
}
