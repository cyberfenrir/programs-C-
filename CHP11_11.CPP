#include<iostream.h>
#include<conio.h>
void Area(double r)
{
    double area = 3.14*r*r;
    cout<<"Area of circle is:"<<area;
}
void Area(int s)
{
    double x = s*s;
    cout<<"Area of square is:"<<x;
}
void Area(double l, double b)
{
    double z = l*b;
    cout<<"Area of rectangle is:"<<z;
}
void main()
{
	clrscr();
	double r;
	cout<<"Enter the radius ";
	cin>>r;
	Area(r);
	int s;
	cout<<"Enter the side of square ";
	cin>>s;
	Area(s);
	double l;
	double b;
	cout<<"Enter the length ";
	cin>>l;
	cout<<"Enter the breadth ";
	cin>>b;
	Area(l,b);
	getch();
}