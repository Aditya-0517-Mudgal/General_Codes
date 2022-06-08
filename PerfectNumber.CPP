#include<iostream.h>
#include<conio.h>
void main()
{   clrscr();
    int i,s=0,N;
    cout<<"Enter a number : ";
    cin>>N;
    for(i=1;i<=(N/2);i++)
    {   if(N%i==0)
	s=s+i;
    }
    if(s==N)
    cout<<"This is a Perfect Number";
    else
    cout<<"This is not a Perfect Number";
    getch();
}