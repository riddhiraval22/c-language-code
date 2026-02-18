#include<iostream>
#include<conio.h>
using namespace std;
//static member function
class Tops
{
 int num;
 static int count;
 public:
 	void val_counter()
 	{
 		num=++count;
	}
	void obj_Counter()
	{
		cout<<"\n Object Count : "<<num;
	}	
	static void display()
	{
		cout<<"\nCount : "<<count;
	}	
};
int Tops::count;
int main()
{
	Tops t1,t2;
	t1.val_counter();
	t2.val_counter();
	
	Tops::display();
	Tops t3;
	t3.val_counter();
	Tops::display();
	t1.obj_Counter();
	t2.obj_Counter();
	t3.obj_Counter();
	getch();
}
