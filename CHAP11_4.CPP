#include<iostream.h>
#include<conio.h>
int Armstrong(int a)
{
    int x = 0;
    int z;
    for(z=a; z>0;)
    {
       int d = z%10;
       x=x+(d*d*d);
       z=z/10;
    }
    if(x==a)
    {
	return 1;
     }
     else
     {
	return 0;
     }
}
void main()
{
   int a;
   cout<<"Enter the number:";
   cin>>a;
   int k = Armstrong(a);
   if(k==1)
   {
       cout<<"Armstrong number";
   }
   else
   {
      cout<<"Not an Armstrong number ";
    }
   getch();
}