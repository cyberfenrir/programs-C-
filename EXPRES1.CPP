#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int a;
	int b;
	int c;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	cout<<"Enter the third number: ";
	cin>>c;
	double x = (a*a+b*b+c*c);
	double d = sqrt(x);
	cout<<"The value of the expression is: "<<d;
	getch();
}