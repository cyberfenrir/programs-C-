#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int i,n;
	double x;
	double sum = 0.0;
	cout<<"Enter the number of terms: ";
	cin>>n;
	for(i=0; i<=n; i++)
	{
	    x = (pow(2,i));
	    sum = sum+(x-1);
	}
	cout<<"The sum of the series is :"<<sum;
	getch();
}