#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a;
	cout<<"Enter the year: ";
	cin>>a;
	if((a%4)==0)
	{
		cout<<"It is a Leap Year: ";
	}
	else
	{
		cout<<"It is not a Leap Year:: ";
	}
	getch();
}