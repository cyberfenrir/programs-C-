#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	cout<<"\"Hollow Inverted Triangle Shape\"\n\n";
	int z, i, j, k, x, y, n=6;
	for(z=0; z<9; z++)
	{
		cout<<"&";
	}
	cout<<endl;
	for(i=1;i <=3; i++)
	{
		for(j=0; j<i; j++)
		{
			cout<<" ";
		}
		cout<<"&";
		for(k=1; k<n; k++)
		{
			cout<<" ";
		}
		cout<<"&"<<endl;
		n-=2;
	}
	for(x=1; x<=1; x++)
	{
		for(y=4; y>=x; y--)
		{
			cout<<" ";
		}
		cout<<"&";
	}
	getch();
}