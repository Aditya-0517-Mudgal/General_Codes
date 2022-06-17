#include<iostream.h>
#include<conio.h>
int fact(int r)
{   int i,t=1;
    for(i=r;i>1;i--)
	t=t*i;
    return t;
}
void main()
{   clrscr();
    unsigned int i,N,n=0,r,s,x,a[4];
    cout<<"Enter a number : ";
    cin>>N;
    for(i=1;i<=N;i++)
    {   x=i;
	s=0;
	while(x>0)
	{   r=x%10;
	    s=s + fact(r);
	    x=x/10;
	}
	if(i==s)
	   a[n++]=i;
    }
    cout<<"There are "<<n<<" Strong Numbers till "<<N<<"\nThey are :";
    for(i=0;i<n;i++)
	cout<<" "<<a[i];
    getch();
}
