#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void word_change(char a[30])
{
    int i;
    for(i=0; a[i]!='\0'; ++i)
    {
	if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
	{
		a[i]=toupper(a[i]);
	}
	else if((a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))
	{
		a[i]=tolower(a[i]);
	}
	else if(isdigit(a[i]))
	{
		a[i]='#';
	}
	else if(a[i]==' ')
	{
		a[i]=' ';
	}
	else
	{
		a[i]='$';
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
	word_change(a);
	getch();
}

