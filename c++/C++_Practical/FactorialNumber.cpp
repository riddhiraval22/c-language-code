#include<iostream>
#include<conio.h>
using namespace std;
class FactorialNumber
{
	public:
		void fact()
		{
			int n,fact=1;
			cout<<"\n Enter number :";
			cin>>n;
			
			for (int i=0;i<=n;i++)
			{
			fact=n*n-1;	
			}
			cout<<"Factorial number of "<<n <<": "<<fact;
		}
};
int main()
{
	FactorialNumber f;
	f.fact();
	getch();
	
	
}
