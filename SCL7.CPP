#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void word_caps(char a[30])
{
    int i;
    for(i=0; a[i]!='\0'; ++i)
    {
	if(i==0)
	{
	      if(islower(a[i]))
		  a[i]=toupper(a[i]);
	}
	else
	{
	    if(a[i]!=' ')
	    {
		 if(isupper(a[i]))
		 a[i]=tolower(a[i]);
	    }
	    else
	    {
		i++;
		if(islower(a[i]))
		a[i]=toupper(a[i]);
	    }
	}
    }
    cout<<"\n The sentence after all the changes made is: "<<a;
}
void main()
{
	clrscr();
	char a[30];
	cout<<"Enter a sentence: ";
	gets(a);
	word_caps(a);
	getch();
}

