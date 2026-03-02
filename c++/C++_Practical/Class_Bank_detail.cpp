#include<iostream>
#include<conio.h>
using namespace std;
class Bank
{
	int acno;
	char cname[50];
	double balance;
	public:
		void openAccount()
		{
			cout<<"\nEnter Customer Name :";
			cin>>cname;
			cout<<"\nEnter Account Number :";
			cin>>acno;
			cout<<"\nEnter Initail Balance :";
			cin>>balance;
			cout<<"************************";
			cout<<"\nHello "<<cname <<" your Account Number "<<acno <<" with Balance " <<balance <<"Rs.";
		}
		void deposite(double amount)
		{
			balance=balance+amount;
		}
		void withdraw(double amount)
		{
			if(amount<=balance)
			{
				balance=balance-amount;
			}
			else
			{
				cout<<"\nsorry You Need Another"<<amount-balance;
			}
		}
		void checkBalance()
		{
			cout<<"\ncurrent Balance is :"<<balance;
		}
};
int main()
{
	Bank b1;
	int choice;
	double amount;
	b1.openAccount();
	do
	{
		cout<<"\n***************************";
		cout<<"\n1.Deposite ";
		cout<<"\n2.Withdrawl";
		cout<<"\n3.Check Balance";
		cout<<"\n4.Exit";
		cout<<"\n***************************";
		cout<<"\n\nEnter Your choice : ";
		cin>>choice;
		if(choice==1)
		{
			cout<<"\nEnter Deposite Amount : ";
			cin>>amount;
			b1.deposite(amount);
		}
		else if(choice==2)
		{
			cout<<"\nEnter Withdrwal Amount : ";
			cin>>amount;
			b1.withdraw(amount);
			
		}
		else if(choice==3)
		{
			b1.checkBalance();
		}
		else if(choice==4)
		{
			cout<<"\nThank you for using our services.";
			cout<<"\n***************************";
			break;
		}
		else
		{
			cout<<"\nInvalid choice.Please try again";
		}
		cout<<"\n***************************";
		
	}while(choice!=4);
	getch();
	return 0;
	
}
