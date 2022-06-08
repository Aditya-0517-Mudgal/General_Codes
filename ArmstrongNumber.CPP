#include<iostream.h>
#include<conio.h>
int x(int j, int rem)
{  int a,y=1;
   for(a=j;a>0;a--)
   y=y*rem;
   return y;
}
void main()
{  int num,sum=0,rem,i,j,n;
   clrscr();
   cout<<"Enter the no. of digits of the number : ";
   cin>>i;
   j=i;
   cout<<"Enter the number : ";
   cin>>num;
   n=num;
   while(i!=0)
   {  rem=num%10;
      sum=sum + x(j,rem);
      num=num/10;
      i--;
   }
   if(sum==n)
   cout<<"This is an armstrong number";
   else
   cout<<"This is not an armsrtong number";
   getch();
}
