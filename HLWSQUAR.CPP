#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a, b, c, d, e,n;
	cout<<"Enter the number of terms ";
	cin>>n;
	for(a=1; a<=n; a++)
	{
		cout<<"*";
	}
	cout<<endl;
	for(b=1; b<=(n-2); b++)
	{
		for(c=1; c<=1; c++)
		{
			cout<<"*";
		}
		for(d=1; d<=(n-2); d++)
		{
			cout<<" ";
		}
		cout<<"*"<<endl;
	}
	for(e=1; e<=n; e++)
	{
		cout<<"*";
	}
	getch();
}