#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int day;
	cout<<"Enter the day of a week: ";
	cin>>day;
	switch(day)
	{
		case 1:   cout<<"It is Monday.";
			  break;

		case 2:   cout<<"It is Tuesday.";
			  break;

		case 3:   cout<<"It is Wednesday.";
			  break;

		case 4:   cout<<"It is Thursday.";
			  break;

		case 5:   cout<<"It is Friday.";
			  break;

		case 6:   cout<<"It is Saturday.";
			  break;

		case 7:   cout<<"It is Sunday.";
			  break;

		default:  cout<<"Invalid input of day number.";
	}
	getch();
}
