#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	int a[20][20];
	char *name[20	][20];
	int m, n, i, j;
	char *b;
	cout<<"Enter the floor number: ";
	cin>>m;
	cout<<"Enter the room number: ";
	cin>>n;
	for(i=1; i<=m; i++)
	{
		for(j=1; j<=n; j++)
		{
			cout<<"Enter the name of the person: \t";
			gets(name[i][j]);
		}
	}
	cout<<"Enter the name of the person to be found: \t";
	cin>>b;
	for(i=1; i<=m; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(strcmp(b, name[i][j])==0)
			{
				cout<<"The name of the person is: \t";
				puts(name[i][j]);
				//cout<<endl<<"The floor number is: "<<i;
				cout<<endl<<i;
				//cout<<endl<<"The room number is: "<<j;
				cout<<endl<<j;
				break;
			}
		}
	}
	getch();
}