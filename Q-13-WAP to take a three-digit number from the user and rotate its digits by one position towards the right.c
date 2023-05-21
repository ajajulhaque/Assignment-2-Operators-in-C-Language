//13.Write a program to take a three-digit number from the user and rotate its digits by
//   one position towards the right.


#include<stdio.h>
#include<conio.h>
int main()
{
     int n;
     printf("Enter a three-digit number:");
     scanf("%d",&n);
      int a=n/100;
      int b=n%10;
      int c=n/10;
      int d=c*10;
      int e=d%100;
      int f=e+a;
      int g=f*10;
    int  h=g+b;
      printf("Rotate its one position towards the right=%d",h);
   getch();
   return 0;
}

