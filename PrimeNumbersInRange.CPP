#include<iostream.h>
#include<conio.h>
void main()
{   clrscr();
    int i,j,N,a[200],n=0,c;
    cout<<"Enter a number : ";
    cin>>N;
    for(i=2;i<=N;i++)
    {   if(i==2 || i==3)
	   a[n++]=i;
	else
	{  c=0;
	   for(j=2;j<=i/2;j++)
	   {   if(i%j==0)
	          c++;
	       else if(j==i/2)
	       {  if(c==0)
		     a[n++]=i;
	       }
	   }
	}
    }
    cout<<"There (is/are) "<<n<<" Prime Number(s) till "<<N<<"\nThe number(s) :";
    for(i=0;i<n;i++)
        cout<<" "<<a[i];
    getch();
}
