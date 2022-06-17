#include<stdio.h>
#include<conio.h>
void main()
{  unsigned int i,n;
   clrscr();
   printf("Enter a number : ");
   scanf("%d",&n);
   for(i=2;i<=n/2;i++)
   {  if(n%i==0)
      {  printf("This is not a prime number");
	 break;
      }
      else
      {  printf("This is a prime number");
	 break;
      }
   }
   getch();
}
