#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	double a;
	double b;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	double c = (fabs(a)+b);
	double d = (fabs(b)+a);
	if(c>d)
	{
		cout<<"the value of the expression is: "<<c;
	}
	else
	{
		cout<<"the value of the expression is: "<<d;
	}
	getch();
}