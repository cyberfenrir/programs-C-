#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double a;
	double b;
	double c;
	cout<<"Enter first side of the triangle: ";
	cin>>a;
	cout<<"Enter second side of the triangle: ";
	cin>>b;
	cout<<"Enter third side of the triangle: ";
	cin>>c;
	if((a!=b)&&(b!=c)&&(c!=a))
	{
		cout<<"It is a scalene triangle ";
	}
	else
	{
		cout<<"It is not a scalene triangle";
	}
	getch();
}