#include<iostream.h>
#include<conio.h>
void main()
{   clrscr();
    int i,j,s,N,a[10],n=0;
    cout<<"Enter a number : ";
    cin>>N;
    for(i=1;i<=N;i++)
    {  s=0;
       for(j=1;j<=i/2;j++)
       {   if(i%j==0)
	      s=s+j;
	   if(j==i/2 && s==i)
	      a[n++]=i;
       }
    }
    cout<<"There (is/are) "<<n<<" Perfect Number(s) till "<<N<<"\nThe number(s) :";
    for(i=0;i<n;i++)
        cout<<" "<<a[i];
    getch();
}
