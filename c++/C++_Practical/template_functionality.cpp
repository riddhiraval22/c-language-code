#include<iostream>
#include<conio.h>
using namespace std;
template <typename T>
T add(T a,T b)
{
	return a+b;
}
int main()
{
	cout<<add<int>(5,3)<<"\n";
	cout<<add<double>(3.4,5.3);
	cout<<add<string>("ri","ddhi");
	getch();
}
