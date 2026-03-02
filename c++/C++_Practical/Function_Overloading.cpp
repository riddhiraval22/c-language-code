#include<iostream>
#include<conio.h>
using namespace std;
class Tops
{
	public:
	void test()
	{
		cout<<"function with no arguments "<<endl;
	}
	void test(int a)
	{
		cout<<"Function with 1 arguments "<<endl;
	}
	void test(int a, int b)
	{
		cout<<"Function with 2 arguments"<<endl;
	}
};
int main()
{
	Tops t1;
	t1.test();
	t1.test(1);
	t1.test(1,2);
	getch();
}
