#include<iostream.h>
#include<conio.h>
int x(int j, int rem)
{  int a,y=1;
   for(a=j;a>0;a--)
   {   y=y*rem;
   }
   return y;
}
void main()
{  int num,sum=0,rem,i,j,n;
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\tEnter the no. of digits of the number : ";
   cin>>i;
   j=i;
   cout<<"\n\t\t\t\tEnter the number : ";
   cin>>num;
   n=num;
   while(i!=0)
   {  rem=num%10;
      sum=sum + x(j,rem);
      num=num/10;
      i--;
   }
   if(sum==n)
   cout<<"\t\t\t     This is an armstrong number";
   else
   cout<<"\t\t\t   This is not an armsrtong number";
   getch();
}
