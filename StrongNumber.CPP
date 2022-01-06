#include<iostream.h>
#include<conio.h>
int fact(int r)
{   int res=1,z;
    for(z=r;z>0;z--)
    {   res=res*z;
    }
    return res;
}
void main()
{   clrscr();
    int i,n,r,x,num,sum=0;
    cout<<"Enter the no. of digits in the number : ";
    cin>>n;
    cout<<"Enter the number : ";
    cin>>num;
    x=num;
    for(i=1;i<=n;i++)
    {   r=num%10;
	sum=sum + fact(r);
	num=num/10;
    }
    if(sum==x)
    {   cout<<"This is a Strong number";
    }
    else
    {   cout<<"This is not a Strong number";
    }
    getch();
}
