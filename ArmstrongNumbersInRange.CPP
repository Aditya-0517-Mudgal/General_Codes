#include<iostream.h>
#include<conio.h>
int arm(int r,int c)
{   int i,t=1;
    for(i=0;i<c;i++)
	t=t*r;
    return t;
}
void main()
{   clrscr();
    unsigned int i,N,n=0,c,r,s,x,z,a[20];
    cout<<"Enter a number : ";
    cin>>N;
    for(i=1;i<=N;i++)
    {   c=s=0;
	z=x=i;
	while(x>0)
	{  x=x/10;
	   c++;
	}
	while(z>0)
	{  r=z%10;
	   s=s+arm(r,c);
	   z=z/10;
	}
	if(s==i)
	   a[n++]=i;
    }
    cout<<"There are "<<n<<" Armstrong Numbers till "<<N<<"\nThey are :";
    for(i=0;i<n;i++)
	cout<<" "<<a[i];
    getch();
}
