#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#define dash'*'
struct Student
{
  int roll;
  char name[30];
  int marks;
};
void sortmarks(Student S[10], int n)
{
    int i, j;
    Student temp;
    for(i=0; i<n-1; i++)
    {
       for(j=0; j<n-i-1; j++)
       {
	   if(S[j].marks<S[j+1].marks)
	   {
	       temp = S[j];
	       S[j]=S[j+1];
	       S[j+1]=temp;
	    }
       }
    }
}
void main()
{
	clrscr();
	Student S[10];
	int i, n;
	cout<<"How many records do you want to enter?\n";
	cin>>n;
	cout<<"Enter "<<n<<" records\n";
	for(i=0; i<n; i++)
	{
	   cout<<"Enter record no. "<<i+1<<endl;
	   cout<<"Enter roll \n";
	   cin>>S[i].roll;
	   cout<<"Enter name \n";
	   cin>>S[i].name;
	   cout<<"Enter marks \n";
	   cin>>S[i].marks;
	 }
	 sortmarks(S[10], n);
	 cout<<"Display the sorted array";
	 for(i=0;i<n; i++)
	 {
	    cout<<"Record no. "<<i+1;
	    cout<<"Roll "<<S[i].roll;
	    cout<<"Name "<<S[i].name;
	    cout<<"Marks "<<S[i].marks;
	 }
	 getch();
}
