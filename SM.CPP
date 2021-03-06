#include<iostream.h>
#include<conio.h>
#include<limits.h>
void print2smallest(int arr[], int arr_size)
{
	int i, first, second;
	if(arr_size<2)
	{
		cout<<"\n Invalid Input!";
		return;
	}
	first = second = INT_MAX;
	for(i=0; i<arr_size; i++)
	{
		if(arr[i]<first)
		{
			second=first;
			first=arr[i];
		}
		else if((arr[i]<second) && (arr[i]!=first))
		{
			second=arr[i];
		}
	}
	if(second==INT_MAX)
	{
		cout<<"There is no second smallest element.";
	}
	else
	{
		cout<<"The smallest element and the second smallest element are: "<<first<<" and "<<second;
	}
}

void main()
{
	clrscr();
	int arr[] = {12, 13, 1, 10, 34, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	print2smallest(arr, n);
	getch();
}