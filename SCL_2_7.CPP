#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	char str[100];
	int i, count = 0;
	int j, k, flag =1;
	cout<<"\n Enter any String (max. 100) characters : ";
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	     count++;
	}
	for(j=0,k=count-1;j<count/2;++j,--k)
	{
		if(str[j]!=str[k])
		{
			flag = 0;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"It is palindrome.";
	}
	else
	{
		cout<<"It is not palindrome.";
	}
       getch();
}




