#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	double a;
	cout<<"\t\t\tMENU: ";
	cout<<"\t\t1. To find the natural logarithm of the number";
	cout<<"\t\t2. To find the Absolute value of the number";
	cout<<"\t\t3. To find the sqare root of the number";
	char ch;
	cout<<" Enter the choice";
	cin>>ch;
	cout<<" Enter the number";
	cin>>a;
	double b;
	switch(ch)
	{
		case 'c': b = log(a);
			  cout<<"The natural logarithm of the number is:"<<b;
			  break;

		case 's': b = fabs(a);
			  cout<<"The Absolute value of the number is:"<<b;
			  break;

		case 'r': b = sqrt(a);
			  cout<<"The sqare root of the number is:"<<b;
			  break;

		default:  cout<<"Invalid input of choice.";
	}
	getch();
}
