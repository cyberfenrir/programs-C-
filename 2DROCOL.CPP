#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int i, m, n, j;
    int a[20][20];
    cout<<"Enter the number of rows:";
    cin>>m;
    cout<<"Enter the number of columns:";
    cin>>n;
    for(i=0;i<m;i++)
    {
       for(j=0; j<n; j++)
       {
	    cin>>a[i][j];
       }
       endl;
     }
     cout<<"The numbers of the matrix are:\n";
     for(i=0;i<m;i++)
    {
       for(j=0; j<n; j++)
       {
	    cout<<a[i][j]<<" ";
       }
       cout<<endl;
     }
     cout<<"The sum of the elements of each row: \n";
     int r =0;
     for(i=0;i<m;i++)
     {
       r = 0;
       for(j=0; j<n; j++)
       {
	    r = r+a[i][j];
       }
       cout<<" The sum of the elements of row "<<i+1<<" is : "<<r<<"\n";
     }
     cout<<"The sum of the elements of each column: \n";
     int c =0;
     for(i=0;i<m;i++)
     {
       c = 0;
       for(j=0; j<n; j++)
       {
	    c = c+a[j][i];
       }
       cout<<" The sum of the elements of column "<<i+1<<" is : "<<c<<"\n";
     }
     getch();
}