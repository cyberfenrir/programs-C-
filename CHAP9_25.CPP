#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[20][20];
	int m, n, i, j;
	cout<<"Enter the number of rows of the array: ";
	cin>>m;
	cout<<"Enter the number of columns of the array: ";
	cin>>n;
	cout<<"Enter the elements  of the 2-D array one by one:\n ";
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
		cout<<endl;
	}
	int p, sum = 0, pro=1;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			p=a[i][j];
			if((p%2)==0)
			{
			    sum = sum+p;
			}
			else
			{
			   pro = pro*p;
		}       }
		cout<<endl;
	}
	cout<<"The sum of the even numbers is: "<<sum<<endl;
	cout<<"The product of the odd numbers is: "<<pro;
	getch();
}