#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	cout<<"\"Hollow Diampond Shape\"\n\n";
	int n, i, j, k, z=1;
	cout<<"Enter the size of the hollow diamond: ";
	cin>>n;
	for(i=0; i<=n; i++)
	{
		for(j=n; j>i; j--)
		{
			cout<<" ";
		}
		cout<<"&";
		if(i>0)
		{
			for(k=1; k<=z; k++)
			{
				cout<<" ";
			}
			z+=2;
			cout<<"&";
		}
		cout<<endl;
	}
	z-=4;
	for(i=0; i<=n-1; i++)
	{
		for(j=0; j<=i; j++)
		{
			cout<<" ";
		}
		cout<<"&";
		for(k=1; k<=z; k++)
		{
			cout<<" ";
		}
		z-=2;
		if(i!=(n-1))
		{
			cout<<"&";
		}
		cout<<endl;
	}
	getch();
}

