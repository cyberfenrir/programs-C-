#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n, x = 1, k, i, j;
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(i=0; i<n; i++)
	{
		for(k=1; k<=n-i; k++)
		{
			cout<<" ";
		}
		for(j=0; j<=i; j++)
		{
			if((j==0) || (i==0))
			{
				x = 1;
			}
			else
			{
				x = x*(i-j+1)/j;
			}
			cout<<" "<<x;
		}
		cout<<endl;
	}
	getch();
}