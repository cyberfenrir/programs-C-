#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b;
	cout<<"\t\t\tMENU: ";
	cout<<"\t\t+ To find the sum";
	cout<<"\t\t- To find the difference";
	cout<<"\t\t* To find the multiplication";
	char ch;
	cout<<" Enter the choice of operation";
	cin>>ch;
	cout<<" Enter the first number";
	cin>>a;
	cout<<" Enter the second number";
	cin>>b;
	double c;
	switch(ch)
	{
		case '+': c = a+b;
			  cout<<"The sum is:"<<c;
			  break;

		case '-': c = a-b;
			  cout<<"The difference is:"<<c;
			  break;

		case '*': c = a*b;
			  cout<<"The product is:"<<c;
			  break;

		default:  cout<<"Invalid input of choice of operation.";
	}
	getch();
}
