#include<iostream>
#include<conio.h>
using namespace std;
inline int sum(int a,int b)
{
	
	return a+b;
}
inline int sub(int a,int b)
{
	return a-b;
}
inline int mul(int a,int b)
{
	return a*b;
}
int main()
{
	int x,y;
	cout<<"Enter value: "<<endl;
	cin>>x;
	cout<<"Enter Value: "<<endl;
	cin>>y;
	cout<<"Addition is : "<<sum(x,y)<<endl;
	cout<<"Substraction is : "<<sub(x,y)<<endl;
	cout<<"Multiplication is : "<<mul(x,y)<<endl;
	getch();
}
