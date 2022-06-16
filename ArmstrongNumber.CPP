#include<iostream.h>
#include<conio.h>
int x(int j, int rem)
{  int a,y=1;
   for(a=j;a>0;a--)
       y=y*rem;
   return y;
}
void main()
{  int num,sum=0,rem,i,j=0,n;
   clrscr();
   cout<<"Enter the number : ";
   cin>>num;
   i=n=num;
   while(i>0)
   {  i=i/10;
      j++;
   }
   while(num>0)
   {  rem=num%10;
      sum=sum + x(j,rem);
      num=num/10;
   }
   if(sum==n)
      cout<<"This is an Armstrong Number";
   else
      cout<<"This is not an Armsrtong Number";
   getch();
}
